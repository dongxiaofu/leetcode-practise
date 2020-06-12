//
// Created by chugang on 2020/6/12.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;

    solution.push(1);
    solution.push(2);
    solution.push(3);

    int top = solution.pop();   // 3
    int top2 = solution.pop();   // 2
    cout << top << "," << top2 << endl;
    solution.push(4);
    int top3 = solution.pop();
    cout << top3 << endl;

    return 0;
}
