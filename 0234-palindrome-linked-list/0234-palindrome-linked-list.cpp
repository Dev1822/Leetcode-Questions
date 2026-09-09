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
    bool isPalindrome(ListNode* head) {
        ListNode* i=head;
        ListNode* j=head;
        while(j->next!=NULL && j->next->next!=NULL){
            i=i->next;
            j=j->next->next;
        }
        i=i->next;
        ListNode* secondHalf=NULL;
        while(i!=NULL){
            ListNode* nextNode=i->next;
            i->next=secondHalf;
            secondHalf=i;
            i=nextNode;
        }
        while(secondHalf!=NULL){
            if(head->val!=secondHalf->val){
                return false;
            }
            secondHalf=secondHalf->next;
            head=head->next;
        }
        return true;
    }
};