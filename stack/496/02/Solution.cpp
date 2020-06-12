//
// Created by chugang on 2020/6/12.
//
/***
 * 下一个更大元素 I。
 * 思路：使用hash + 单调栈
 * 1.遍历nums2，将第一个元素存到栈S中。
 * 2.继续遍历nums2，当前元素v，栈顶元素top。
 * 2.1.当v>top，top出栈，v入栈，并且hash_table[top] = v。
 * 2.2.当v<=top，v入栈。
 * 2.2.3.重复2.1，直至S为空，或top>=v。
 * 3.遍历nums1，从hash_table中取得目标值。
 * 注意：使用了新知识 map
 */
#include "Solution.h"

vector<int> Solution::nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    int len1 = nums1.size();
    int len2 = nums2.size();
    vector<int> result;
    if (len1 * len2 == 0) {
        return result;
    }
    stack<int> stack1;
    map<int, int> hash_table;
    for (int i = 0; i < len2; i++) {
        int v = nums2[i];
        if (stack1.empty()) {
            stack1.push(v);
            continue;
        }
        while (!stack1.empty()) {
            int top = stack1.top();
            if (v > top) {
                hash_table[top] = v;
                stack1.pop();
            } else {
                break;
            }
        }
        stack1.push(v);
    }

    while (!stack1.empty()) {
        int top = stack1.top();
        hash_table[top] = -1;
        stack1.pop();
    }

    for (int i = 0; i < len1; i++) {
        result.push_back(hash_table[nums1[i]]);
    }

    return result;
}