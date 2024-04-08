// #include <algorithm>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> intervalIntersection(std::vector<std::vector<int>>& firstList,
                                             std::vector<std::vector<int>>& secondList) {
        size_t i = 0, j = 0;
        std::vector<std::vector<int>> res;
        while (i != firstList.size() or j != secondList.size()) {
            auto el1 = firstList[i];
            auto el2 = secondList[j];
            if (el2[1] < el1[0])
                j++;
            else if (el1[1] < el2[0])
                i++;
            else if (el1[0] <= el2[1] and el1[1] >= el2[0]) {
                res.push_back({std::max(el1[0], el2[0]), std::min(el1[1], el2[1])});
                if (el1[1] > el2[1]) j++;
                else i++;
            }
            else j++;
        }
        return res;
    }
};