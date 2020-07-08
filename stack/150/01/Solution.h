//
// Created by chugang on 2020/7/8.
//

#ifndef LEETCODE_PRACTISE_SOLUTION_H
#define LEETCODE_PRACTISE_SOLUTION_H

#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string> tokens);

private:
    bool isOperator(string str);

private:
    int operate(int num1, int num2, char operatorC);
};


#endif //LEETCODE_PRACTISE_SOLUTION_H
