/*给你一个整数数组 nums ，数组中的元素 互不相同 。
返回该数组所有可能的子集（幂集）。

解集 不能 包含重复的子集。你可以按 任意顺序 返回解集。
*/
#include<iostream>
#include<vector>

using namespace std;

class Solution {
private:
vector<vector<int>> result;
vector<int>path;
void backtracking(vector<int>& nums,int startIndex){
    result.push_back(path); // 收集子集，要放在终止添加的上面，否则会漏掉自己
    if (startIndex >= nums.size()) {
        return;
}
    for (int i = startIndex; i < nums.size(); i++) {
        path.push_back(nums[i]);    // 子集收集元素
        backtracking(nums, i + 1);  // 注意从i+1开始，元素不重复取
        path.pop_back();            // 回溯
}
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        result.clear();
        path.clear();
        backtracking(nums, 0);
        return result;
    }
};