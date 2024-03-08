/*给你一个整数数组 nums 和一个整数 k ，
请你返回其中出现频率前 k 高的元素。你可以按 任意顺序 返回答案。*/

#include <iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        vector<int>b(k);
        sort(a.begin(),a.end());
        int j=0;
        for(int i=a.size()-1;k>0;k--){
            b[j]=

        }
    }
};