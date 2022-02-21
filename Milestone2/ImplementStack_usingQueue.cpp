class MyStack {
public:
    queue<int>q;
    
    MyStack() {
        queue<int>q;
    }
    
    void push(int x) {
        q.push(x);
        for(int i=0; i<q.size()-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        
    }
    
    int pop() {
        int x=q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.empty())
            return true;
        else
            return false;
    }
};
