//
// Created by chugang on 2020/7/5.
//

#ifndef LEETCODE_PRACTISE_SOLUTION_H
#define LEETCODE_PRACTISE_SOLUTION_H

#include <stack>
#include "limits"

using namespace std;

class Solution {
public:
    void push(int x);

    void pop();

    int top();

    int getMin();

private:
    stack<int> S1;
    stack<int> S2;
};


#endif //LEETCODE_PRACTISE_SOLUTION_H
