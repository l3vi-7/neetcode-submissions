class MinStack {
stack<int> mainStk, auxStk;
public:
    MinStack() {
    }
    
    void push(int val) {
        if (mainStk.empty()) {
            mainStk.push(val);
            auxStk.push(val);
        } else {
            auxStk.push(min(val, auxStk.top()));
            mainStk.push(val);
        }
    }
    
    void pop() {
        if (!mainStk.empty()) {
            mainStk.pop();
            auxStk.pop();
        }
    }
    
    int top() {
        if (!mainStk.empty()) {
            return mainStk.top();
        }
    }
    
    int getMin() {
        if (!mainStk.empty()) {
            return auxStk.top();
        }
    }
};
