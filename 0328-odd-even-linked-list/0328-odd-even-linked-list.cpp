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
        ListNode* odd=NULL;
        ListNode* oddTail=NULL;
        ListNode* even=NULL;
        ListNode* evenTail=NULL;
        while(head!=NULL){
            ListNode* oddNode=new ListNode(head->val);
            if(odd==NULL){
                odd=oddNode;
                oddTail=oddNode;
            }
            else{
                oddTail->next=oddNode;
                oddTail=oddNode;
            }
            head=head->next;
            if(head==NULL){
                break;
            }
            ListNode* evenNode=new ListNode(head->val);
            if(even==NULL){
                even=evenNode;
                evenTail=evenNode;
            }
            else{
                evenTail->next=evenNode;
                evenTail=evenNode;
            }
            head=head->next;
        }
        ListNode* res=NULL;
        ListNode* resTail=NULL;
        while(odd!=NULL){
            ListNode* newNode=new ListNode(odd->val);
            if(res==NULL){
                res=newNode;
                resTail=newNode;
            }
            else{
                resTail->next=newNode;
                resTail=newNode;
            }
            odd=odd->next;
        }
        while(even!=NULL){
            ListNode* newNode=new ListNode(even->val);
            if(res==NULL){
                res=newNode;
                resTail=newNode;
            }
            else{
                resTail->next=newNode;
                resTail=newNode;
            }
            even=even->next;
        }
        return res;
    }
};