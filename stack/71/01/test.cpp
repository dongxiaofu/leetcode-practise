//
// Created by chugang on 2020/7/6.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    string path1 = "/a/../../b/../c//.//";
    string result1 = solution.simplifyPath(path1);
    cout << result1 << endl;
    return 0;
}
