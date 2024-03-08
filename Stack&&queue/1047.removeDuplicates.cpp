/*给出由小写字母组成的字符串 S，重复项删除操作会选择两个相邻且相同的字母，并删除它们。

在 S 上反复执行重复项删除操作，直到无法继续删除。

在完成所有重复项删除操作后返回最终的字符串。答案保证唯一。*/

#include <iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char &i : s){
            if(st.empty()||i!=st.top()){
                st.push(i);
            }else{
                st.pop();
            }
        }
        string result = "";
        while(!st.empty()){
                result+=st.top();
                st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};