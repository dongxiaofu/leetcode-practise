//
// Created by chugang on 2020/7/6.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    vector<string> ops({"5", "2", "C", "D", "+"});
//    int n = stoi(ops[2]);
    int sum1 = solution.calPoints(ops);
    cout << sum1 << endl;
    return 0;
}
