//
// Created by chugang on 2020/7/5.
//
/**
 * https://leetcode-cn.com/problems/implement-queue-using-stacks-lcci/
 * 化栈为队
 * 实现一个MyQueue类，该类用两个栈来实现一个队列。
 */
#include "Solution.h"

void Solution::push(int x) {
    if (S1.empty()) {
        top = x;
    }
    S1.push(x);
}

int Solution::pop() {
    while (!S1.empty()) {
        S2.push(S1.top());
        S1.pop();
    }
    int tmpTop = S2.top();
    S2.pop();
    if (!S2.empty()) {
        top = S2.top();
    }
    while (!S2.empty()) {
        S1.push(S2.top());
        S2.pop();
    }
    return tmpTop;
}

int Solution::peek() {
    return top;
}

bool Solution::empty() {
    return S1.empty();
}