class MinStack {
public:
    stack<int> s1;
    stack<int> minis;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minis.empty() || minis.top()>=val){
            s1.push(val);
            minis.push(val);
        }
        else{
            s1.push(val);
        }
    }
    
    void pop() {
        if(s1.top()==minis.top()){
            s1.pop();
            minis.pop();
        }
        else{
            s1.pop();
        }
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return minis.top();
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