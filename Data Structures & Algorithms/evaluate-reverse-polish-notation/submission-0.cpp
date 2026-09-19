class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> rl;

        for (string ch : tokens) {

            if (ch != "+" && ch != "-" && ch != "*" && ch != "/") {
                int x = stoi(ch);
                rl.push(x);
            }
            else {
                int s = rl.top();
                rl.pop();

                int t = rl.top();
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