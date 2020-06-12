//
// Created by chugang on 2020/6/12.
//

#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    int n1 = solution.reverse(123);
    cout << n1 << endl;

    int n2 = solution.reverse(-123);
    cout << n2 << endl;

    int n3 = solution.reverse(120);
    cout << n3 << endl;

    int n4 = solution.reverse(2147483647);
    cout << n4 << endl;

    int n5 = solution.reverse(901000);
    cout << n5 << endl;

    int n6 = solution.reverse(-2147483648);
    cout << n6 << endl;

    int n7 = solution.reverse(-2147483647);
    cout << n7 << endl;


    return 0;
}