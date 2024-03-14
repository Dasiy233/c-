/*给你一个单链表的头节点 head ，请你判断该链表是否为
回文链表
。如果是，返回 true ；否则，返回 false 。*/


#include<iostream>
#include<vector>
using namespace std;

class Solution {//转数组处理
public:
    bool isPalindrome(ListNode* head) {
       vector<int> s1,s2;
       while(head!=nullptr) {
           s1.push_back(head->val);
           head = head->next;
       }
        s2 = s1;
        reverse(s1.begin(),s1.end());

       return s1 == s2;
    }
};
