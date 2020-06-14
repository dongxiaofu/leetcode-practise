//
// Created by chugang on 2020/6/14.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    vector<int> nums({-1, 0, 1, 2, -1, -4});
    vector<vector<int>> result = solution.threeSum(nums, 0);
    for (auto vv : result) {
        for (auto v:vv) {
            cout << v << ",";
        }
        cout << endl;
    }

//    -1,0,1,
//    1,0,-1,
//    0,1,-1,
//    -1,2,-1,
//    2,2,-4,
//    最后一行结果，包含nums中不存在的数字。例如，不包含2个2。
    return 0;
}
