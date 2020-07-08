//
// Created by chugang on 2020/7/8.
//
// https://leetcode-cn.com/problems/binary-tree-zigzag-level-order-traversal/
#include "Solution.h"

vector<vector<int>> Solution::zigzagLevelOrder(TreeNode *root) {
    vector<vector<int>> result;
    if (root == NULL) {
        return result;
    }
    stack<TreeNode *> S1;
    stack<TreeNode *> S2;

    S1.push(root);

    while (!S1.empty() || !S2.empty()) {
        vector<int> oneLine;
        while (!S1.empty()) {
            TreeNode *top = S1.top();
            oneLine.push_back(top->val);
            S1.pop();
            if (top->left != NULL) S2.push(top->left);
            if (top->right != NULL) S2.push(top->right);
        }
        if (oneLine.size() > 0) result.push_back(oneLine);

        vector<int> oneLine2;
        while (!S2.empty()) {
            TreeNode *top = S2.top();
            oneLine2.push_back(top->val);
            S2.pop();
            if (top->right != NULL) S1.push(top->right);
            if (top->left != NULL) S1.push(top->left);
        }
        if (oneLine2.size() > 0) result.push_back(oneLine2);
    }

    return result;
}