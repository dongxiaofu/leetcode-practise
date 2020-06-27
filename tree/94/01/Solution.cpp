//
// Created by chugang on 2020/6/27.
//
/**
 * 二叉树的中序遍历
 * 给定一个二叉树，返回它的中序 遍历。
 * 思路：非递归实现
 * 1.不停地将左子树放入栈stack中。
 * 2.当左子树为叶子结点时，对stack执行出栈操作，并将当前结点p设置为p=p->right。
 */
#include "Solution.h"

vector<int> Solution::inorderTraversal(TreeNode *root) {
    stack<TreeNode *> stack1;
    vector<int> result;
    TreeNode *p = root;
    while (!stack1.empty() || p != NULL) {
        if (p != NULL) {
            stack1.push(p);
            p = p->left;
        } else {
            TreeNode *node = stack1.top();
            result.push_back(node->val);
            stack1.pop();
            p = node->right;
        }
    }
    return result;
}
