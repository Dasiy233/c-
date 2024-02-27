/*给你一个 无重复元素 的整数数组 candidates 和一个目标整数 target ，
找出 candidates 中可以使数字和为目标数 target 的 所有 不同组合 ，
并以列表形式返回。你可以按 任意顺序 返回这些组合。

candidates 中的 同一个 数字可以 无限制重复被选取 
。如果至少一个数字的被选数量不同，则两种组合是不同的。 

对于给定的输入，保证和为 target 的不同组合数少于 150 个。*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
private:
    vector<vector<int>> result; // 存放符合条件结果的集合
    vector<int> path; // 用来存放符合条件结果

    void backtracking(vector<int>& candidates, int target, int sum, int startIndex){
        if(sum>target)
            return ;
        if(sum == target){
            result.push_back(path);
            return;
        }

        for(int i =startIndex;i<candidates.size();i++){
            sum +=candidates[i];
            path.push_back(candidates[i]);
            backtracking(candidates,target,sum,i);
            sum-=candidates[i];
            path.pop_back();
     }
    }


public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
           result.clear();
        path.clear();
        backtracking(candidates, target, 0, 0);
        return result;
    }
};