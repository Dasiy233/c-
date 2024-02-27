/*给你一个字符串 s
请你将 s 分割成一些子串，使每个子串都是 回文串 。返回 s 所有可能的分割方案。

回文串 是正着读和反着读都一样的字符串。*/

#include<iostream>
#include<vector>

using namespace std;


class Solution {
private:
vector<vector<string>> result;
vector<string> path; // 放已经回文的子串
void backtracking (const string& s, int startIndex) {
    if(startIndex >=s.size()){
        result.push_back(path);
        return;
    }
    for(int i = startIndex; i < s.size(); i++){
        if(isPalindrome(s,startIndex,i)){//是回文子串
        // 获取[startIndex,i]在s中的子串
        string str = s.substr(startIndex,i-startIndex + 1);
        //substr主要功能是复制子字符串，要求从指定位置开始，并具有指定的长度。
        path.push_back(str);
        }else{
            continue;
        }
        backtracking(s, i + 1); // 寻找i+1为起始位置的子串
        path.pop_back();        // 回溯过程，弹出本次已经添加的子串
    }
}
bool isPalindrome(const string& s, int start, int end) {//判断是否是回文
 //一个指针从前向后，一个指针从后向前，
 //如果前后指针所指向的元素是相等的，就是回文字符串了。
     for (int i = start, j = end; i < j; i++, j--) {
         if (s[i] != s[j]) {
             return false;
         }
     }
     return true;
 }

public:
    vector<vector<string>> partition(string s) {
        result.clear();
        path.clear();
        backtracking(s, 0);
        return result;
    }
};