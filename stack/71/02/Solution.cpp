//
// Created by chugang on 2020/7/7.
//
// stringstream的使用
// append的使用
// list的使用
#include "Solution.h"

string Solution::simplifyPath(string path) {
    string ans, tem;
    list<string> strs;
    stringstream ss(path);
    while (getline(ss, tem, '/')) {
        if (tem == "" || tem == ".")continue;
        else if (tem == ".." && strs.size() != 0)strs.pop_back();
        else if (tem != "..")strs.push_back(tem);
    }

    if (strs.empty()) {
        return ans.append("/");
    } else {
        for (auto item : strs) {
            ans.append("/" + item);
        }
        return ans;
    }
}