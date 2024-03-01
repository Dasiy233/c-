/*给你一个整数数组 nums ，找出并返回所有该数组中不同的递增子序列，
递增子序列中 至少有两个元素 。你可以按 任意顺序 返回答案。

数组中可能含有重复元素，如出现两个整数相等，也可以视作递增序列的一种特殊情况。*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
private:
vector<vector<int>>result;
vector<int>path;
void backtracking(vector<int>& nums,int startIndex){
    if(startIndex >= nums.size())
 {      
        result.push_back(path);
        return;
}
    for(int i =startIndex;i<startIndex;i++){
        

    }

}
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
    result.clear();
    path.clear();
    sort(nums.begin,nums.end);
    }
};