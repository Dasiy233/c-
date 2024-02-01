#include<iostream>
#include<stack>
using namespace std;

class isValid {
public:
    bool solution(string s) {
        stack<char> st;

        if (s.size() % 2 != 0)
            return false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if (st.empty())
                    return false;

                if ((s[i] == ')' && st.top() == '(') ||
                    (s[i] == ']' && st.top() == '[') ||
                    (s[i] == '}' && st.top() == '{')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        return st.empty(); // 检查遍历后栈是否为空
    }
};

int main() {
    isValid s;
    bool isValidString = s.solution("()[]{}");

    if (isValidString) {
        cout << "Valid String" << endl;
    } else {
        cout << "Invalid String" << endl;
    }
    system("pause");
    return 0;
}
