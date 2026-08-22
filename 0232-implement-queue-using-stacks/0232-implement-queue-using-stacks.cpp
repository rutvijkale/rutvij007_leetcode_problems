class MyQueue {
public:
stack<int> q1,q2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!q1.empty())
        {
            q2.push(q1.top());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.top());
            q2.pop();
        }
    }
    
    int pop() {
        int x=q1.top();
        q1.pop();
        return x;
    }
    
    int peek() {
        return q1.top();
    }
    
    bool empty() {
        if(q1.size()==0)return true;
        return false;
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