//
// Created by chugang on 2020/7/7.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    node1->right = node2;
    node2->left = node3;
    vector<int> result = solution.preorderTraversal(node1);
    for (auto v : result) {
        cout << v << ",";
    }
    cout << endl;   // 1,2,3
    return 0;
}
