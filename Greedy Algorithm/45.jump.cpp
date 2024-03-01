/*给定一个长度为 n 的 0 索引整数数组 nums。初始位置为 nums[0]。

每个元素 nums[i] 表示从索引 i 向前跳转的最大长度。
换句话说，如果你在 nums[i] 处，你可以跳转到任意 nums[i + j] 处:

0 <= j <= nums[i] 
i + j < n
返回到达 nums[n - 1] 的最小跳跃次数。生成的测试用例可以到达 nums[n - 1]。*/

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0; // 步数
        int curDistance = 0;//当前覆盖
        int nextDistance =0 ;// 下一步覆盖
        if (nums.size() == 1) return 0;
        for(int i =0; i<nums.size();i++){
            nextDistance = max(nums[i]+i,nextDistance);
            if(i == curDistance){
                ans++;
                curDistance = nextDistance;
                if(nextDistance>= nums.size()-1)break;
        }
    }
       return ans;
    }
};