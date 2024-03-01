#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int rows) {
        if (rows == 1 or rows >= s.size()) return s;
        vector<string> table(rows, "");
        bool down = true;
        size_t index = 0;
        for(size_t i = 0; i < s.size(); i++) {
            table[index] += s[i];
            if (down) {
                if (index == rows - 1) {
                    down = 0;
                    index--;
                }
                else index++;
            }
            else {
                if (index == 0) {
                    down = 1;
                    index++;
                }
                else index--;
            }
        }

        string res;
        for (auto& s : table)
            res += s;

        return res;
    }
};