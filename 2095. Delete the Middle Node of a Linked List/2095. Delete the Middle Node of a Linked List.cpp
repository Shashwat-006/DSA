/*
 * Problem: 2095. Delete the Middle Node of a Linked List
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int mid = (cnt/2)+1;
        cnt=1;
        temp=head;
        while(cnt<mid-1){
            temp=temp->next;
            cnt++;
        }
        temp->next=temp->next->next;
        return head;
    }
};
