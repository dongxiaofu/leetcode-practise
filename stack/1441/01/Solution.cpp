//
// Created by chugang on 2020/6/12.
//
/**
 * 用栈操作构建数组。
 * 有点理解不了。
 * 思路：
 * 对i...n的每个数字，必须做操作，可以是组合操作。
 * 1.从1开始，若target中的所有元素都小于1，那么，target不可能由任何操作得到。
 * 2.若i与target[index]相等，那么，操作是"Push"。i++，index++。这个数字、这个结果的操作推论完了，继续推论下个数字。
 * 3.若i与target[index]不相等，那么，操作是"Push"，"Pop"。只有这样才能解释i为何不在target中。i++，index不变。
 * 3.1.虽然我知道index不变，也通过举例明白确实如此。可，这对我来说，不是显而易见的，可能我自己思考，不会首先想到就是如此。
 */
#include "Solution.h"

vector<string> Solution::buildArray(vector<int> &target, int n) {
    vector<string> result;
    int index = 0;
    for (int i = 1; i <= n; i++) {
        if (i > target[target.size() - 1]) {
            return result;
        } else if (i == target[index]) {
            result.push_back("Push");
            index++;
        } else {
            result.push_back("Push");
            result.push_back("Pop");
        }
    }

    return result;
}