//
// Created by chugang on 2020/7/5.
//

#ifndef LEETCODE_PRACTISE_SOLUTION_H
#define LEETCODE_PRACTISE_SOLUTION_H

#include <stack>

using namespace std;

class Solution {
public:
    void push(int x);

    int pop();

    int peek();

    bool empty();

private:
    stack<int> S1;
    stack<int> S2;
    int top;
};


#endif //LEETCODE_PRACTISE_SOLUTION_H
