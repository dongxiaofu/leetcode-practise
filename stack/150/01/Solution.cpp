//
// Created by chugang on 2020/7/8.
//
// 逆波兰表达式求值
// https://leetcode-cn.com/problems/evaluate-reverse-polish-notation/
// switch的用法，condition必须是整型或枚举型，char
#include "Solution.h"

int Solution::evalRPN(vector<string> tokens) {
    int result = 0;
    int len = tokens.size();
    if (len == 0) {
        return result;
    }
    stack<int> s;

    for (auto token:tokens) {
        if (isOperator(token)) {
            int top = s.top();
            s.pop();
            int secondTop = s.top();
            s.pop();
            int temp = operate(secondTop, top, token[0]);
            s.push(temp);
        } else {
            s.push(stoi(token));
        }
    }

    return s.top();
}

bool Solution::isOperator(string str) {
    return (str == "+" || str == "-" || str == "*" || str == "/");
}

int Solution::operate(int num1, int num2, char operatorC) {
    int result;
    switch (operatorC) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
    }
    return result;
}