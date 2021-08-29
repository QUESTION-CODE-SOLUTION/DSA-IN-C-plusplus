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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *pointer=head;
        ListNode *point=pointer;
        while(pointer!=nullptr && pointer->next!=nullptr)
        {
            if(pointer->val==pointer->next->val){
                pointer->next=pointer->next->next;
            }
            else pointer=pointer->next;
        }
        return point;
    }
};
