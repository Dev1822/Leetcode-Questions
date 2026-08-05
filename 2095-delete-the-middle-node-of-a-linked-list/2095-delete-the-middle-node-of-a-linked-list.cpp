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
        ListNode* temp=head;
        ListNode* fast=head;
        ListNode* slow=head;
        int count=0;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            count++;
        }
        if(count==0){
            temp=NULL;
            return temp;
        }
        // slow=slow->next;
        for(int i=1;i<count;i++){
            temp=temp->next;
        }
        temp->next=slow->next;
        return head;
    }
};