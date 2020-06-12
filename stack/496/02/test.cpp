//
// Created by chugang on 2020/6/12.
//
#include <iostream>
#include "Solution.h"

int main() {
    Solution solution;
//    nums1 = [4,1,2], nums2 = [1,3,4,2].
    int temp1[3] = {4, 1, 2};
    vector<int> nums1(temp1, temp1 + 3);
    int temp2[4] = {1, 3, 4, 2};
    vector<int> nums2(temp2, temp2 + 4);
    vector<int> result = solution.nextGreaterElement(nums1, nums2);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << ",";
    }
    cout << endl;
    // 上面的测试用例输出：-1,3,-1,


//   测试用例 [1,3,5,2,4]     [6,5,4,3,2,1,7]


    return 0;
}
