/*给定一个非空二叉树的根节点 root , 以数组的形式返回每一层节点的平均值。
与实际答案相差 10-5 以内的答案可以被接受。*/

#include<iostream>
#include <vector>
#include<queue>
#include <stdio.h>
#include<stack>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
            vector<double>result;
            queue<TreeNode*>que;
            
            if(root!=NULL)que.push(root);
            while (!que.empty())
            {double temp=0;
                int size=que.size();
                TreeNode*node;
                for(int i= 0;i<size;i++){
                    node=que.front();
                    temp+=node->val;
                    que.pop(); 
                    if (node->left) que.push(node->left);
                    if (node->right) que.push(node->right);
                }
                result.push_back(temp/size);
            }
            return result;
    }
};