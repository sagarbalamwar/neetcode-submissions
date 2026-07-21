class MinStack {
public:
    stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int>tstack;
        int mini=st.top();
        while(st.size()){
            mini=min(mini,st.top());
            tstack.push(st.top());
            st.pop();
        }
        while(tstack.size()){
            st.push(tstack.top());
            tstack.pop();
        }
        return mini;
    }
};
