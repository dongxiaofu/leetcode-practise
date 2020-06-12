//
// Created by chugang on 2020/6/12.
//
/***
 * 整数反转
 * 思路：
 * 1.将整数N的每位数字存储到数组中。
 * 1.1. number = N % 10，number 是当前位置的数。将number存储到数组array。然后, N = N / 10。
 * 1.2. 重复1.1步骤，循环终止条件是 N == 0。
 * 2.遍历array，当前元素是v。
 * 2.1.newNumber = newNumber * 10 + v。
 * 2.2.判断是否溢出
 * 2.2.1.newNumber > INT_MAX / 10
 * 2.2.2.newNumber == INT_MAX / 10 && v > INT_MAX % 10
 * 3.加上符号
 * 知识点：
 * 1.判断数据是否溢出。
 * 2.获取整型数字的每一位。
 * 3.非0数字后面的0保留。
 */
#include "Solution.h"

int Solution::reverse(int x) {
    int sign = 1;
    int absoluteV = x;
    if (x < 0) {
        sign = -1;
        if (x == INT_MIN) {     // 这个特例，我没提前想到。INT_MIN，第31行会报错；INT_MIN，第31行不报错。下面会判断它溢出。
            return 0;
        }
        absoluteV = -1 * x;
    }
    vector<int> numbers(0);
    while (absoluteV != 0) {
        int v = absoluteV % 10;
        numbers.push_back(v);
        absoluteV /= 10;
    }
    int len = numbers.size();
    int y = 0;
    bool start = false;
    for (int i = 0; i < len; i++) {
        int n = numbers[i];
        if (n != 0) {
            start = true;
        } else if (start == false) {
            continue;
        }
        if (y > INT_MAX / 10 || (y == INT_MAX / 10 && n > INT_MAX % 10)) {
            return 0;
        }
        y = y * 10 + n;
    }
    return (sign == 1) ? y : -1 * y;
}
