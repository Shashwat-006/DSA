/*
 * Problem: 328. Odd Even Linked List
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/odd-even-linked-list/submissions/2119339936/
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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next==NULL ) return head;
        ListNode* odd = head;
        ListNode* ehead = head->next;
        ListNode* even = ehead;
        while(even!=NULL && even->next!=NULL){
            odd->next = odd->next->next;
            even->next= even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next = ehead;
        return head;
    }
};
