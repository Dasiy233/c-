/*给你一个字符串数组 tokens ，表示一个根据 逆波兰表示法 表示的算术表达式。

请你计算该表达式。返回一个表示表达式值的整数。

注意：

有效的算符为 '+'、'-'、'*' 和 '/' 。
每个操作数（运算对象）都可以是一个整数或者另一个表达式。
两个整数之间的除法总是 向零截断 。
表达式中不含除零运算。
输入是一个根据逆波兰表示法表示的算术表达式。
答案及所有中间计算结果可以用 32 位 整数表示。*/

#include <iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <long long> st;
        for(int i =0 ; i<tokens.size(); i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                long long num1=st.top();
                st.pop();
                long long num2=st.top();
                st.pop();
                if(tokens[i]=="+")
                st.push(num2+num1);
                 if(tokens[i]=="*")
                st.push(num2*num1);
                 if(tokens[i]=="-")
                st.push(num2-num1);
                 if(tokens[i]=="/")
                st.push(num2/num1);
            }else
                st.push(stoll(tokens[i]));

        }
                  int result = st.top();
        st.pop(); // 把栈里最后一个元素弹出（其实不弹出也没事）
        return result;
    }
};