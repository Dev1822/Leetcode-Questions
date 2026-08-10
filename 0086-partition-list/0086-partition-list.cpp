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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL){
            return head;
        }
        ListNode* before=NULL;
        ListNode* beforeTail=NULL;
        ListNode* after=NULL;
        ListNode* afterTail=NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* newNode=new ListNode(temp->val);
            if((temp->val)<x){
                if(before==NULL){
                    before=newNode;
                    beforeTail=newNode;
                }
                else{
                    beforeTail->next=newNode;
                    beforeTail=newNode;
                }
            }
            else{
                if(after==NULL){
                    after=newNode;
                    afterTail=newNode;
                }
                else{
                    afterTail->next=newNode;
                    afterTail=newNode;
                }
            }
            temp=temp->next;
        }
        if(before==NULL){
            before=after;
        }
        else{
            if(after!=NULL){
                beforeTail->next=after;
            }
        }
        return before;
    }
};