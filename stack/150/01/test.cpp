//
// Created by chugang on 2020/7/8.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    int result1 = solution.evalRPN(vector<string>({"18"}));
    cout << result1 << endl;    // 18
    int result2 = solution.evalRPN(vector<string>({"18", "19", "2", "/", "+"}));
    cout << result2 << endl;    // 27
    return 0;
}
