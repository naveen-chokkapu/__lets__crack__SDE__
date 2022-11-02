/* https://leetcode.com/problems/implement-stack-using-queues/ */

class MyStack {
public:
    stack<int> s;
    MyStack() {
        
    }
    void push(int x) {
        s.push(x);
    }
    int pop() {
        int val= s.top();
        s.pop();
        return val;
        
    }
    int top() {
        return s.top();
    }
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */