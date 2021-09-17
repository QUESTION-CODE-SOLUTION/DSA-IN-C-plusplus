// https://leetcode.com/problems/reverse-linked-list-ii/

// Given the head of a singly linked list and two integers left and right where left <= right, 
// reverse the nodes of the list from position left to position right, and return the reversed list.

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL)return NULL;
        ListNode* prev=NULL, *curr=head;
        while(left>1){
            prev=curr;
            curr=curr->next;
            left--;
            right--;
        }
        
        
        ListNode* first=prev, *last=curr;
        
        while(right>0){
            ListNode* nextNode = curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
            right--;
        }
        
        if(first!=NULL){
            first->next=prev;
        }
        else{
            head=prev;
        }
        
        last->next=curr;
        return head;
        
    }
};
