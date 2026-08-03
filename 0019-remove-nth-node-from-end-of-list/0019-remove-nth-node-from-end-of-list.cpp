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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        if(length==1){
            ListNode* first=NULL;
            return first;
        }
        ListNode* res=head;
        int index=length-n;
        if(index==0){
            res=res->next;
            return res;
        }
        for(int i=0;i<index-1;i++){
            res=res->next;
        }
        res->next=res->next->next;
        return head;
    }
};