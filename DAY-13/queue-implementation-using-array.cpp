/* https://www.codingninjas.com/codestudio/problems/2099908 */

#include <bits/stdc++.h> 
class Queue {
public:
    Queue() {
        // Implement the Constructor
    }
    queue<int> q;
    bool isEmpty() {
        return q.empty();
    }
    void enqueue(int data) {
        q.push(data);
    }
    int dequeue() {
        if(q.empty()) return -1;
        int k=q.front();
        q.pop();
        return k;
    }
    int front() {
        if(q.empty()) return -1;
        return q.front();
    }
};