/*给定一个不含重复数字的数组 nums ，
返回其 所有可能的全排列 。你可以 按任意顺序 返回答案。*/


#include<iostream>
#include<vector>

using namespace std;


class Solution {
private:
vector<vector<int>> result;
vector<int> path;
void backtracking (vector<int>& nums, vector<bool>& used){
    if(path.size() == nums.size()){
        result.push_back(path);
        return;
    }
    for(int i=0;i < nums.size(); i++){
        if(used[i]==true) continue;
        used[i]=true;
        path.push_back(nums[i]);
        backtracking(nums,used);
        path.pop_back();
        used[i]=false;
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
       result.clear();
        path.clear();
        vector<bool> used(nums.size(), false);
        backtracking(nums, used);
        return result;
    }
};