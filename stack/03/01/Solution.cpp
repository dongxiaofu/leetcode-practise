//
// Created by chugang on 2020/7/5.
//

#include <climits>
#include "Solution.h"

void Solution::push(int x) {
    S1.push(x);
    if (S2.empty()) {
        S2.push(x);
    } else {
        int top = S2.top();
        if (x < top) {
            S2.push(x);
        } else {
            S2.push(top);
        }
    }
}

int Solution::top() {
    if (S1.empty()) {
        return INT_MAX;
    }
    return S1.top();
}

void Solution::pop() {
    if (S1.empty()) {
        return;
    }
    S1.pop();
    S2.pop();
}

int Solution::getMin() {
    if (S2.empty()) {
        return INT_MAX;
    }
    return S2.top();
}