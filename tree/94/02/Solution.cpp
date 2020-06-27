//
// Created by chugang on 2020/6/27.
//
/**
 * 二叉树的中序遍历
 * 给定一个二叉树，返回它的中序 遍历。
 * 思路：递归实现
 */
#include "Solution.h"

vector<int> Solution::inorderTraversal(TreeNode *root) {
    vector<int> vals;
    inorderTraversalCore(root, vals);
    return vals;
}

void Solution::inorderTraversalCore(TreeNode *root, vector<int> &vals) {
    if (root == NULL) {
        return;
    }
    inorderTraversalCore(root->left, vals);
    vals.push_back(root->val);
    inorderTraversalCore(root->right, vals);
}
