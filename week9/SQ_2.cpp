class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1,q2;
    MyStack() {
        while(!q1.empty()) q1.pop();
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(q1.size()>1)
        {
            int x=q1.front();
            q1.pop();
            q2.push(x);
        }
        int y=q1.front();
        q1.pop();
        while(!q2.empty())
        {
            int x=q2.front();
            q2.pop();
            q1.push(x);
        }
        return y;
    }
    
    /** Get the top element. */
    int top() {
        int x;
        while(!q1.empty())
        {
            x=q1.front();
            q1.pop();
            q2.push(x);
        }
        
        while(!q2.empty())
        {
            int y=q2.front();
            q2.pop();
            q1.push(y);
        }
        return x;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
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
