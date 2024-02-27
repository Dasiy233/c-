/*给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。
答案可以按 任意顺序 返回。
给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。*/

#include<iostream>
#include<vector>
using namespace std;

const string letterMap[10] = {
    "", // 0
    "", // 1
    "abc", // 2
    "def", // 3
    "ghi", // 4
    "jkl", // 5
    "mno", // 6
    "pqrs", // 7
    "tuv", // 8
    "wxyz", // 9
};

class Solution {
private:
vector<string> result;
string s;
void backtracking(const string& digits, int index){
    if (index == digits.size()) {
    result.push_back(s);
    return;
}
    int digit = digits[index] - '0';        // 将index指向的数字转为int
    string letters = letterMap[digit];  
    
    for (int i = 0; i < letters.size(); i++) {
    
    s.push_back(letters[i]);            // 处理
    backtracking(digits, index + 1);    // 递归，注意index+1，一下层要处理下一个数字了
    s.pop_back();                       // 回溯

}
}

public:
    vector<string> letterCombinations(string digits) {
        s.clear();
        result.clear();
        if (digits.size() == 0) {
            return result;
        }
        backtracking(digits, 0);
        return result;
    }

};