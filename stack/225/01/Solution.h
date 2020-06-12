//
// Created by chugang on 2020/6/12.
//

#ifndef LEETCODE_PRACTISE_SOLUTION_H
#define LEETCODE_PRACTISE_SOLUTION_H

#include <queue>

using namespace std;

class Solution {
public:
    void push(int x);

    int pop();

    int top();

    bool empty();

private:
    queue<int> Queue1;
    int MyTop;
};


#endif //LEETCODE_PRACTISE_SOLUTION_H
