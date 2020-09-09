class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> idx;
        for (int i = 0; i < (int)s.size(); i++) {

            if (s[i] == '(') {
                idx.push(i);
            }

            if (s[i] == ')') {
                if (!idx.empty()) {
                    idx.pop();
                } else {
                    s[i] = '#';
                }
            }
        }
        while (!idx.empty()) {
            s[idx.top()] = '#';
            idx.pop();
        }
        s.erase(remove(s.begin(), s.end(), '#'), s.end());
        return s;
    }
};