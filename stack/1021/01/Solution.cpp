//
// Created by chugang on 2020/7/4.
//
// 删除最外层的括号
// 未能透彻理解
#include "Solution.h"

string Solution::removeOuterParentheses(string S) {
    int len = S.size();
    string ans;
    int L = 1, R = 0;
    for (int i = 1; i < len; i++) {
        if (S[i] == '(') {
            L++;
        } else {
            R++;
        }
        if (L != R) {
            ans.push_back(S[i]);
        } else {
            i++;
            L = 1;
            R = 0;
        }
    }

    return ans;
}
