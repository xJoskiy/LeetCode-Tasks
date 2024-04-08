#include <cmath>
#include <string>
#include <algorithm>

class Solution {
public:
    int strStr(std::string str, std::string substr) {
        str.find(substr);
        if (str.size() < substr.size()) return -1;
        
        size_t base = 2, mod = __INT_MAX__, cur_hash = 0, targ_hash = 0;
        size_t substr_size = substr.size();
        size_t str_size = str.size();

        for (size_t i = 0; i < substr_size; i++) {
            targ_hash = (targ_hash + substr[i] * static_cast<size_t>(pow(base, substr_size - 1 - i))) % mod;
        }

        for (size_t i = 0; i < substr_size; i++) {
            cur_hash = (cur_hash + str[i] * static_cast<size_t>(pow(base, substr_size - 1 - i))) % mod; 
        }
        if (cur_hash == targ_hash) return 0;

        for (size_t i = substr_size; i <= str_size; i++) {
            cur_hash = ((cur_hash * base) - str[i - substr_size] * (static_cast<size_t>(pow(base, substr_size))) % mod + str[i]) % mod;
            if (cur_hash == targ_hash) return i - substr_size + 1;
        }

        return -1;
    }
};