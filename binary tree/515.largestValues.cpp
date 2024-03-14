/*给定一棵二叉树的根节点 root ，请找出该二叉树中每一层的最大值。*/
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
    vector<int> largestValues(TreeNode* root) {
            queue<TreeNode*>que;
            vector<int>result;
            if(root!=NULL)que.push(root);
            while(!que.empty()){
                int max=INT_MIN;
                int size=que.size();
                for(int i=0;i<size;i++){
                    TreeNode*node=que.front();
                    if(node->val>max)max=node->val;
                    que.pop();
                    if(i==size-1)result.push_back(max);
                    if (node->left) que.push(node->left);
                    if (node->right) que.push(node->right);
                }
            }
             return result;
    }
};