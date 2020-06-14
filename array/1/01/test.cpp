//
// Created by chugang on 2020/6/14.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    vector<int> arr({3, 2, 4});
    vector<int> result = solution.twoSum(arr, 6);
    for (auto n:result) {
        cout << n << ",";
    }
    cout << endl;

    return 0;
}
