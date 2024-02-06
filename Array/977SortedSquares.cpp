/*给你一个按 非递减顺序 排序的整数数组 nums，
返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for (int i = 0; i < A.size(); i++) {
            A[i] *= A[i];
        }
        sort(A.begin(), A.end()); // 快速排序
        return A;
    }
};

int main() {
    vector<int> nums = {-4, 2, 3};
    Solution a;
    vector<int> result = a.sortedSquares(nums);

    // 打印结果向量的元素
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    system("pause");
    return 0;
}
