//
// Created by chugang on 2020/7/8.
//

#ifndef LEETCODE_PRACTISE_SOLUTION_H
#define LEETCODE_PRACTISE_SOLUTION_H

#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root);
};


#endif //LEETCODE_PRACTISE_SOLUTION_H
