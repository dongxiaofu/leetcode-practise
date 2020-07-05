//
// Created by chugang on 2020/7/6.
//
/*
 * 棒球比赛
 * https://leetcode-cn.com/problems/baseball-game/
 */
#include "Solution.h"

int Solution::calPoints(vector<string> &ops) {
    vector<int> result;
    int len = ops.size();
    int size = result.size();
    for (int i = 0; i < len; i++) {
        if (ops[i] == "+") {
            result.push_back((result[size - 1]) + result[size - 2]);
        } else if (ops[i] == "D") {
            result.push_back(2 * result[size - 1]);
        } else if (ops[i] == "C") {
//            result[size - 1] = 0;
            result.pop_back();
        } else {
            result.push_back(stoi(ops[i]));
        }
        size = result.size();
    }

    int sum = 0;
    for (int num : result) {
        sum += num;
    }

    return sum;
}