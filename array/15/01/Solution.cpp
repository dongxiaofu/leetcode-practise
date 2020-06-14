//
// Created by chugang on 2020/6/14.
//
/**
 * 三数之和。
 * 数组nums，target是和。
 * 思路：使用hash
 * 1.两层循环，第一次当前元素v1，第二层当前v2。
 * 2.v3 = target - v1 - v2。
 * 3.检查是否存在hash[v3]
 * 3.1.存在，返回结果,[v3,v1,v2]
 * 3.2.不存在，存储,hash[v3] = {v1,v2}
 *
 * 上述思路有问题，结果，包含nums中不存在的数字。我未能找到解决这个问题的方法。
 */
#include "Solution.h"

vector<vector<int>> Solution::threeSum(vector<int> &nums, int target) {
    vector<vector<int>> result;
    int len = nums.size();
    if (len == 0) {
        return result;
    }
    map<int, int> hash1;
    for (int num:nums) {
        hash1[num] = 1;
    }
    map<int, vector<int>> hash;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            int v3 = target - nums[i] - nums[j];
            if (hash1[v3] != 1) {
                continue;
            }
            if (hash.count(v3)) {
                vector<int> temp({v3, nums[i], nums[j]});
                result.push_back(temp);
            } else {
                hash[v3] = vector<int>({nums[i], nums[j]});
            }
        }
    }

    return result;
}
