/*给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。*/

#include<iostream>
using namespace std;

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp;//临时
        ListNode *cur =head;
        ListNode *pre = NULL;
        while(cur!=NULL){
            temp =cur->next;
            cur->next =pre;
            pre=cur;
            cur=temp;

        }
        return pre;
    }
};