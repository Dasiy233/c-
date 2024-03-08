/*给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
每个右括号都有一个对应的相同类型的左括号。*/

#include <iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size() % 2!=0)
          return false; 

        for(int i =0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else
            {
                if(st.empty())
                    return false;
                if(s[i]==')' && st.top() == '('
                ||s[i]==']' && st.top() == '['
                ||s[i]=='}' && st.top() == '{')
                    st.pop();
            
            else
                return false;
            }

                                 }
    
     return st.empty(); // 检查遍历后栈是否为空
    }
};