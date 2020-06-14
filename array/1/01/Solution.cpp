//
// Created by chugang on 2020/6/14.
//
/**********************************
 * 给定一个整数数组 nums 和一个目标值 target，
 * 请你在该数组中找出和为目标值的那 两个 整数，
 * 并返回他们的数组下标。
 * 注意，数组非排序数组；返回的是下标，而不是元素本身。
 * 思路：
 * 1.遍历nums，检测(target-v)是否存在于hash_table中。
 * 1.1.不存在，以(target-v)为key，下标为value，存储到hash_table中，hash_table[target-v] = i。
 * 1.2.存在，[hash_table[target-v],i]为目标数组。
 * 知识点：
 * 1.使用map
 * 2.检测map是否存在某个key
 ***********************************/
#include "Solution.h"

vector<int> Solution::twoSum(vector<int> &nums, int target) {
    vector<int> result;
    int len = nums.size();
    if (len == 0) {
        return result;
    }
    map<int, int> hash;
    for (int i = 0; i < len; i++) {
        int n = target - nums[i];
        if (hash.count(n)) {    // 判断键n是否存在
            result = vector<int>({hash[n], i});
            break;
        }
        hash[nums[i]] = i;
    }
    return result;
}
