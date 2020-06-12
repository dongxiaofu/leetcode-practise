//
// Created by chugang on 2020/6/12.
//
#include <iostream>
#include "Solution.h"

void print_vector(vector<string> v);

int main() {
    Solution solution;
    int temp[2] = {1, 3};
    vector<int> target(temp, temp + 2);
    vector<string> result = solution.buildArray(target, 3);
    print_vector(result);       // Push,Push,Pop,Push

    return 0;
}

void print_vector(vector<string> v) {
    int len = v.size();
    for (int i = 0; i < len; i++) {
        cout << v[i] << ",";
    }
    cout << endl;
}
