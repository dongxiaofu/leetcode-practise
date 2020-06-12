//
// Created by chugang on 2020/6/12.
//
/*
 * 用队列实现栈。
 * 思路：
 * 1.用两个队列Q1、Q2。
 * 2.入栈时，将元素X入队Q1。
 * 3.出栈时(pop)，将Q1中的所有元素依次出队并入队Q2，然后将Q2的队首出队（即出栈）；然后，将Q2中的所有元素依次出队，并入队Q1。
 * 4.top，与pop很相似，只时不出栈。
 * 5.empty()，<===> Q.empty()
 *
 * 上述思路第3步错误。
 * 更正后的思路：
 * 1.两个类属性：队列Q1和整型MyTop。
 * 2.push：将x入队Q1，并且MyTop = x。
 * 3.top：return  MyTop。
 * 4.pop：返回原MyTop，并更新MyTop。
 * 4.1.将Q1中除队尾的元素外，全部出队并且入队临时队列Q2。
 * 4.2.将Q2赋值给Q1。C++中支持"Q1=Q2"。若不支持，也可以Q2出队、Q1入队达到同样的效果。
 * 4.3.更新MyTop为Q1中最后出队的那个元素。
 */
#include "Solution.h"

void Solution::push(int x) {
    Queue1.push(x);
    MyTop = x;
}

int Solution::pop() {
    int top = MyTop;
    int temp;
    queue<int> Queue2;
    while (Queue1.empty() != true && Queue1.front() != top) {
        temp = Queue1.front();
        Queue2.push(temp);
        Queue1.pop();
    }
    Queue1 = Queue2;
    MyTop = temp;

    return top;
}

int Solution::top() {
    return MyTop;
}

bool Solution::empty() {
    return Queue1.empty();
}
