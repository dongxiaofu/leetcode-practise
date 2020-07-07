//
// Created by chugang on 2020/7/7.
//
// 二叉树的前序遍历，非递归
#include "Solution.h"

vector<int> Solution::preorderTraversal(TreeNode *root) {
    vector<int> result;
    if (root == NULL) {
        return result;
    }
    stack<TreeNode *> S;
    S.push(root);
    while (!S.empty()) {
        TreeNode *top = S.top();
        S.pop();
        result.push_back(top->val);
        if (top->right != NULL) {
            S.push(top->right);
        }
        if (top->left != NULL) {
            S.push(top->left);
        }
    }
    return result;
}
