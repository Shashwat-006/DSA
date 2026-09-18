/*
 * Problem: 232. Implement Queue using Stacks
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/implement-queue-using-stacks/description/
 * Language: cpp
 * Date: 2026-09-18
 */

class MyQueue {
public:
    stack <int> st1,st2;

    MyQueue() {
        
    }
    
    void push(int x) {
        int n=st1.size();
        for(int i=0;i<n;i++){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        for(int i=0;i<n;i++){
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int n=st1.size();
        int el = st1.top();
        st1.pop();
        return el;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        if(st1.size()>0) return false;
        return true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
