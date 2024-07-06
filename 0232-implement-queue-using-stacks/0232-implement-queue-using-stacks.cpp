class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    void transferele(){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    MyQueue() {
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s2.empty()){
            transferele();
        }
        int topele = s2.top();
        s2.pop();
        return topele;
    }
    
    int peek() {
        if(s2.empty()){
            transferele();
        }
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
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