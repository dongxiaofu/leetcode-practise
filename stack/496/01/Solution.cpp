//
// Created by chugang on 2020/6/12.
//
/***
 * 下一个更大元素 I。
 * 思路：暴力解法。
 * 1.遍历nums1，当前元素为v。在nums2中找到v，然后比较v和v的右边第一个元素v1。
 * 2.当v1不存在，即，v是nums2中的最后一个元素，返回-1。
 * 3.当v1存在
 * 3.1.当v1>v，返回v1。
 * 3.2.当v1<=v，返回-1。
 */
#include "Solution.h"

vector<int> Solution::nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    int len1 = nums1.size();
    int len2 = nums2.size();
    vector<int> result;
    if (len1 * len2 == 0) {
        return result;
    }
    for (int i = 0; i < len1; i++) {
        int v = nums1[i];
        int v1 = -1;
        for (int j = 0; j < len2; j++) {
            bool end = false;
            if (nums2[j] == v) {
                for (int k = j + 1; k < len2; k++) {
                    if (nums2[k] > v) {
                        v1 = nums2[k];
                        end = true;
                        break;;
                    }
                }
                // 不符合题意。这是检查v的下一个位置的值是否大于v。题意是，检查v的右边是否存在大于它的数。
//                if (j + 1 < len2 && nums2[j + 1] > v) {
//                    v1 = nums2[j + 1];
//                    break;
//                }
            }
            if (end) {
                break;
            }
        }
        result.push_back(v1);
    }

    return result;
}