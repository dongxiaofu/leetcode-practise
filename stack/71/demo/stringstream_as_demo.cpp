//
// Created by chugang on 2020/7/7.
//
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        int sum = 0, x;
        stringstream ss(line); // 将 line 复制到 stringstream ss 中
        while (ss >> x) sum += x; // 相当于输入一个个的单词，自动将其转化换为数字
        cout << sum << "\n";
    }
    return 0;
}
