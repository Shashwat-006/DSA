/*
 * Problem: 234. Palindrome Linked List
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/palindrome-linked-list/submissions/2121308402/
 * Language: cpp
 * Date: 2026-08-26
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
    ListNode* revert(ListNode* head){
        ListNode* temp=head;
        ListNode* prev = NULL;
        while(temp!=NULL){
            ListNode* ahead = temp->next;
            temp->next=prev;
            prev=temp;
            temp=ahead;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newnode = revert(slow->next);
        ListNode* first = head;
        ListNode* second = newnode;
        while(second!=NULL){
            if(first->val != second->val){
                revert(newnode);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        revert(newnode);
        return true;
    }
};
