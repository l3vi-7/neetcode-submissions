class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int first = stk.top();
                stk.pop();
                int second = stk.top();
                stk.pop();
                stk.push(second);
                stk.push(first);
                stk.push(first + second);
            } else if (operations[i] == "D") {
                stk.push(stk.top() * 2);
            } else if (operations[i] == "C") {
                stk.pop();
            } else {
                stk.push(stoi(operations[i]));
            }
        }
        int result = 0;
        while (!stk.empty()) {
            result += stk.top();
            stk.pop();
        }

        return result;
    }
};