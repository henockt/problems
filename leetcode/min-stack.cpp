class MinStack {
private:
    stack<int> s;
    stack<int> mins;
    int size;
public:
    MinStack() {
        size = 0;
    }
    
    void push(int val) {
        s.push(val);
        if (size > 0)
            mins.push(min(mins.top(), val));
        else
            mins.push(val);
        size++;
    }
    
    void pop() {
        s.pop();
        mins.pop();
        size--;
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
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