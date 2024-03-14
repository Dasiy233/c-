/*给你一棵二叉树的根节点 root ，翻转这棵二叉树，并返回其根节点。*/
#include<iostream>
#include <vector>
#include<queue>
#include <stdio.h>
#include<stack>
using namespace std;

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return root;
        swap(root->left, root->right);  // 中
        invertTree(root->left);         // 左
        invertTree(root->right);        // 右
        return root;
    }
};