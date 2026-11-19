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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return NULL;
        ListNode* temp=NULL;
        ListNode* temp_head;
        ListNode* l1=list1;
        ListNode* l2=list2;
        while(l1!=NULL && l2!=NULL){
            if(l1->val>=l2->val){
                if(temp==NULL){
                    temp=l2;
                    l2=l2->next;
                    temp_head=temp;
                    continue;
                }
                temp->next=l2;
                temp=temp->next;
                l2=l2->next;
            }
            else{
                if(temp==NULL){
                    temp=l1;
                    l1=l1->next;
                    temp_head=temp;
                    continue;
                }
                temp->next=l1;
                temp=temp->next;
                l1=l1->next;
            }
            
        }
        while(l1!=NULL){
            if(temp==NULL){
                 temp=l1;
                l1=l1->next;
                temp_head=temp;
                continue;
            }
            temp->next=l1;
            temp=temp->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            if(temp==NULL){
                temp=l2;
                l2=l2->next;
                temp_head=temp;
                continue;
            }
            temp->next=l2;
            temp=temp->next;
            l2=l2->next;
        }
        return temp_head;
    }
};