//
// Created by chugang on 2020/6/27.
//
#include <iostream>
#include "Solution.h"

void print_vector(vector<int> vals);

int main() {
    Solution solution;
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    node2->left = node1;
    node2->right = node3;

    TreeNode *node4 = new TreeNode(4);

    TreeNode *node5 = new TreeNode(5);
    TreeNode *node6 = new TreeNode(6);
    TreeNode *node7 = new TreeNode(7);
    node6->left = node5;
    node6->right = node7;

    node4->left = node2;
    node4->right = node6;

    vector<int> vals = solution.inorderTraversal(node4);
    print_vector(vals);    // 1,2,3,4,5,6,7

    return 0;
}

void print_vector(vector<int> vals) {
    for (auto val:vals) {
        cout << val << ",";
    }
    cout << endl;
}
