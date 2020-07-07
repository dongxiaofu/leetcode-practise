//
// Created by chugang on 2020/7/7.
//

#ifndef LEETCODE_PRACTISE_SOLUTION_H
#define LEETCODE_PRACTISE_SOLUTION_H

#include <stack>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {}
};

using namespace std;

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root);
};


#endif //LEETCODE_PRACTISE_SOLUTION_H
