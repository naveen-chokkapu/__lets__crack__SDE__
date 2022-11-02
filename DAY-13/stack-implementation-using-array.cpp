/* https://www.codingninjas.com/codestudio/problems/stack-implementation-using-array_3210209 */

#include <bits/stdc++.h> 
// Stack class.
class Stack {
public:
    int n;
    Stack(int capacity) {
        // Write your code here.
        n=capacity;
    }
    stack<int> s;
    void push(int num) {
        if(s.size()!=n) s.push(num);
    }
    int pop() {
        if(s.empty()) return -1;
        int k=s.top(); s.pop();
        return k;
    }
    int top() {
        if(!s.empty()) return s.top();
        return -1;
    }
    int isEmpty() {
        return s.empty();
    }
    int isFull() {
        return (s.size()==n);
    }
};