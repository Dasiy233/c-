/*给定一个候选人编号的集合 candidates 和一个目标数 target ，
找出 candidates 中所有可以使数字和为 target 的组合。
candidates 中的每个数字在每个组合中只能使用 一次 。

注意：解集不能包含重复的组合。 */

#include<iostream>
#include<vector>

using namespace std;

class Solution {
private:
    vector<vector<int>> result;//二维集合
    vector<int> path;//一维数组
    void backtracking(vector<int>& candidates,int target, int sum, int startIndex){
        if (sum > target) return;
        if(sum == target){
            result.push_back(path);
            return;
        }      
        for(int i = startIndex;i < candidates.size();i++){
              // 要对同一树层使用过的元素进行跳过
            if (i > startIndex && candidates[i] == candidates[i - 1]) {
                continue;
            }
            sum += candidates[i];
            path.push_back(candidates[i]);
            backtracking(candidates,target,sum,i+1);
            sum-=candidates[i];
            path.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         result.clear();
        path.clear();
         sort(candidates.begin(), candidates.end());//排序让其相同的元素都挨在一起。
        backtracking(candidates, target, 0, 0);
        return result;
    }
};