//
// Created by chugang on 2020/7/5.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    solution.push(1);
    solution.push(2);
    int top = solution.peek();  // 1
    int n2 = solution.pop();    // 1;
    solution.push(4);
    int n3 = solution.pop();    // 2
    cout << top << "," << n2 << "," << n3 << endl;  // 1,1,2
    return 0;
}
