class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> rl;

        for (string ch : tokens) {

            // Number
            if (ch != "+" && ch != "-" && ch != "*" && ch != "/") {

                int x = stoi(ch);
                rl.push(x);
            }

            // Operator
            else {

                int s = rl.top();   // right operand
                rl.pop();

                int t = rl.top();   // left operand
                rl.pop();

                if (ch == "+") {
                    rl.push(t + s);
                }
                else if (ch == "-") {
                    rl.push(t - s);
                }
                else if (ch == "*") {
                    rl.push(t * s);
                }
                else {
                    rl.push(t / s);
                }
            }
        }

        return rl.top();
    }
};