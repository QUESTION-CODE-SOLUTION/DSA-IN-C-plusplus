// https://leetcode.com/problems/sort-list/
// Given the head of a linked list, return the list after sorting it in ascending order.

// Follow up: Can you sort the linked list in O(n logn) time and O(1) memory (i.e. constant space)?

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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode *temp = head, *fast = head, *slow = head;
        
        while(fast!=NULL && fast->next!=NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        
        ListNode *start_A = sortList(head);
        ListNode *start_B = sortList(slow);
        
        return merge(start_A,start_B);
    }
    
    ListNode* merge(ListNode *a, ListNode *b){
        ListNode *sorted = new ListNode(0);
        ListNode *current = sorted;
        
        while(a!=NULL && b!=NULL){
            if(a->val < b->val){
                current->next = a;
                a = a->next;
            }else{
                current->next = b;
                b = b->next;
            }
            current = current->next;
        }
        
        while(a!=NULL){
            current->next = a;
            a = a->next;
            current = current->next;
        }
        while(b!=NULL){
            current->next = b;
            b = b->next;
            current = current->next;
        }
        
        return sorted->next;
        
    }
};
