#include <iostream>
#include "MaxSubarray.h"

using namespace std;

int main()
{
    Solution solution;
    vector<int> nums{ 2, 3, -2, 4 };
    
    cout << solution.maxProduct(nums);

    return 0;
}
