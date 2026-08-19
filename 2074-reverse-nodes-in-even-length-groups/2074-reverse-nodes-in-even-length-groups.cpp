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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        int odd=1;
        int even=2;
        ListNode* res=NULL;
        ListNode* tail=NULL;
        while(head!=NULL){
            if((odd>length && length%2==1) || (odd<=length)){
                for(int i=1;i<=odd && head!=NULL;i++){
                    ListNode* newNode=new ListNode(head->val);
                    if(res==NULL){
                        res=newNode;
                        tail=newNode;
                    }
                    else{
                        tail->next=newNode;
                        tail=newNode;
                    }
                    head=head->next;
                    length--;
                }
                odd+=2;
            }
            if(head==NULL){
                break;
            }
            if((even>length && length%2==0) || (even<=length)){
                ListNode* reversed=NULL;
                int i;
                for(i=1;i<=even && head!=NULL;i++){
                    ListNode* newNode=new ListNode(head->val);
                    newNode->next=reversed;
                    reversed=newNode;  
                    head=head->next;
                    length--;
                }
                tail->next=reversed;
                for(int j=1;j<i;j++){
                    tail=tail->next;
                }
                even+=2;
            }
        }
        return res;
    }
};