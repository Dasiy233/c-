/*找出所有相加之和为 n 的 k 个数的组合，且满足下列条件：
只使用数字1到9
每个数字 最多使用一次 
返回 所有可能的有效组合的列表 。
该列表不能包含相同的组合两次，组合可以以任何顺序返回。*/

#include<iostream>
#include<vector>
using namespace std;

class Solution{

private:
vector<vector<int>> result; // 存放结果集
vector<int> path; // 符合条件的结果

void backtracking(int targetSum, int k, int sum, int starIndex) {
    if (path.size() == k) {
        if(sum == targetSum) result.push_back(path);
        return;
    }

    for (int i = starIndex;i <= 9; i++) {
        sum += i;
        path.push_back(i);
        backtracking(targetSum, k, sum, i+1); // 递归
        sum -= i;
        path.pop_back();//回溯
    }

}
public:
     vector<vector<int>> combinationSum3(int k, int n) {
            result.clear();
            path.clear();
            backtracking(n,k,0,1);
            return result;
    }
};