#include <iostream>
#include <stack>

int main() {
    std::stack<char> st; // 声明一个字符类型的栈

    // 向栈中压入字符
    st.push('a');
    st.push('b');
    st.push('c');

    // 访问栈顶元素并弹出
    while (!st.empty()) {
        std::cout << st.top() << " "; // 访问栈顶元素
        st.pop(); // 弹出栈顶元素
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}
