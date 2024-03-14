/*给你二叉树的根节点 root ，返回它节点值的 前序 遍历。*/
#include<iostream>
#include <vector>
#include <stdio.h>
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
    void preorder(TreeNode *root, vector<int> &res) {
        if (root == nullptr) {
            return;
        }
        res.push_back(root->val);
        preorder(root->left, res);
        preorder(root->right, res);
    }
void inorder(TreeNode* cur, vector<int>& vec) {
    if (cur == NULL) return;
    inorder(cur->left, vec);  // 左
    vec.push_back(cur->val);    // 中
    inorder(cur->right, vec); // 右
}
void postorder(TreeNode* cur, vector<int>& vec) {
    if (cur == NULL) return;
    postorder(cur->left, vec);  // 左
    postorder(cur->right, vec); // 右
    vec.push_back(cur->val);    // 中
}

    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        preorder(root, res);
        return res;
    }
};

