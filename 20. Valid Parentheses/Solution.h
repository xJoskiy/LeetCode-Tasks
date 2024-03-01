#include <unordered_map>
#include <stack>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        set<char> open{'(', '{', '['};
        for (char c : s) {
            if (open.find(c) != open.end()) st.push(c);
            else if (st.empty() or abs(c - st.top()) > 3) return false;
            else st.pop();
        }

        return st.empty();
    }
};