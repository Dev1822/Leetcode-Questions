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
        ListNode* count=head;
        int length=0;
        while(count!=NULL){
            length++;
            count=count->next;
        }
        if(length==1) return NULL;
        ListNode* temp=head;
        int mid=length/2;
        for(int i=1;i<mid;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};