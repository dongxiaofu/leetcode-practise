//
// Created by chugang on 2020/7/8.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    node3->left = node2;
    node3->right = node4;
    node2->right = node1;
    vector<vector<int>> result = solution.zigzagLevelOrder(node3);
    for (auto item:result) {
        for (int v:item) {
            cout << v << ",";
        }
        cout << endl;
    }
    // [3],[4,2],[1]
    return 0;
}
