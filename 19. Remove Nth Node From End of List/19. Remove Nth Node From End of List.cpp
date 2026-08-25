/*
 * Problem: 19. Remove Nth Node From End of List
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 * Language: cpp
 * Date: 2026-08-25
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        if(head->next==NULL && n==1){
            head=NULL;
            return head;
        }
        ListNode * temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int m= cnt -n +1;
        temp=head;
        cnt=1;
        if(cnt>m-1) return head->next;
        while(cnt < m-1){
            cnt++;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
