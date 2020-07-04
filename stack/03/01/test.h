//
// Created by chugang on 2020/7/5.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    solution.push(-1);
    solution.push(0);
    solution.push(-2);
    int top1 = solution.top();
    cout << top1 << "," << solution.getMin() << endl;   // -2,-2
    solution.pop();
    int top2 = solution.top();
    cout << top2 << "," << solution.getMin() << endl;   // 0,-1
    return 0;
}
