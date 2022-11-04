/* https://leetcode.com/problems/min-stack/ */

class MinStack {
public:
    stack<pair<int,int>> s;
    int m=INT_MIN;  
    MinStack() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);  cout.tie(0);
    }
    void push(int val) {
        (s.empty())?m=val:m=s.top().second;
        m=min(m,val);
        s.push({val,m});
    }
    
    void pop() {
        if(!s.empty()) s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */