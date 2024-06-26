class MyStack {
private:
    queue<int> q;

public:
    MyStack() {}
    
    void push(int x) {
        q.push(x);
        int t = q.size() - 1;
        while (t--) {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int x = q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};