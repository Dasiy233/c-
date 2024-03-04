/*给你一个字符串 s ，请你统计并返回这个字符串中 回文子串 的数目。

回文字符串 是正着读和倒过来读一样的字符串。

子字符串 是字符串中的由连续字符组成的一个序列。

具有不同开始位置或结束位置的子串，即使是由相同的字符组成，也会被视作不同的子串。

 */

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int result = 0 ; //回文个数
        vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
        for(int i= s.size()-1 ;i >=0 ; i--){
            for(int j = i;j<s.size();j++){  //j>=i
                  if (s[i] == s[j]) {
                    if (j - i <= 1) { // 情况一 和 情况二
                        result++;
                        dp[i][j] = true;
                    } else if (dp[i + 1][j - 1]) { // 情况三
                        result++;
                        dp[i][j] = true;
                    }
            }
               }   }
         return result;
    }
};