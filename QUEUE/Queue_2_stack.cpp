#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
    stack<int> st1, st2;

public:
    MyQueue() {}

    // Enqueue
    void push(int x) {
        st1.push(x);
    }

    // Dequeue
    int pop() {
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int x = st2.top();
        st2.pop();
        return x;
    }

    // Peek front element
    int peek() {
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }

    // Check if empty
    bool empty() {
        return st1.empty() && st2.empty();
    }
};
