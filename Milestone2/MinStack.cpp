class MinStack {
public:
    vector<int>v;
    MinStack() {
        vector<int>v;
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.erase(v.begin()+v.size()-1);
        
    }
    
    int top() {
        return v.back();
    }
    
    int getMin() {
        return *min_element(v.begin(),v.end());
    }
};
