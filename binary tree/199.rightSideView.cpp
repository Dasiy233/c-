/*给定一个二叉树的 根节点 root，
想象自己站在它的右侧，按照从顶部到底部的顺序，返回从右侧所能看到的节点值。*/


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
    vector<int> rightSideView(TreeNode* root) {
            queue<TreeNode*>que;
            if(root!=NULL) que.push(root);
            vector<vector<int>>result;
            while (!que.empty())
            {
                int size =que.size();
                vector<int> res;
                for(int i=0;i<size;i++){
                    TreeNode*node=que.front();
                    que.pop();
                    if(i=size-1)
                    res.push_back(node->val);
                    if (node->left) que.push(node->left);
                    if (node->right) que.push(node->right);
                }
                 result.push_back(vec);
            }
            
                return result;
    }
};