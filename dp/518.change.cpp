/*给你一个整数数组 coins 表示不同面额的硬币，另给一个整数 amount 表示总金额。

请你计算并返回可以凑成总金额的硬币组合数。如果任何硬币组合都无法凑出总金额，返回 0 。

假设每一种面额的硬币有无限个。 

题目数据保证结果符合 32 位带符号整数。

 */

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
            //确定dp数组以及下标的含义 dp[j]：凑成总金额j的货币组合数为dp[j]
          vector<int> dp(amount + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < coins.size(); i++) { // 遍历物品
            for (int j = coins[i]; j <= amount; j++) { // 遍历背包
                dp[j] += dp[j - coins[i]];
            }
        }
        return dp[amount];  
    }
};

int main(){
    Solution a;
    int amout =5;
    vector<int> coins={1,2,5};
    a.change(amout,coins);
    return 0;
}