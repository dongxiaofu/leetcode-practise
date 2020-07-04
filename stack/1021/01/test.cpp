//
// Created by chugang on 2020/7/4.
//
#include <iostream>
#include "Solution.h"

int main(){
    Solution solution;
    string S1 = "(()())(())";
    string ans1 = solution.removeOuterParentheses(S1);
    cout<<ans1<<endl;   // ""

    string S2 = "(()())";
    string ans2 = solution.removeOuterParentheses(S2);
    cout<<ans2<<endl;   // ()()
    return 0;
}
