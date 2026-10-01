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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        ListNode* res=NULL;
        ListNode* tail=NULL;
        while(head!=NULL){
            if(length<k){
                tail->next=head;
                break;
            }
            ListNode* newNode=NULL;
            ListNode* newNodeTail=newNode;
            for(int i=0;i<k && head!=NULL;i++){
                ListNode* temp=new ListNode(head->val);
                if(newNode==NULL){
                    newNode=temp;
                    newNodeTail=temp;
                }
                else{
                    temp->next=newNode;
                    newNode=temp;
                }
                head=head->next;
                length--;
            }
            if(res==NULL){
                res=newNode;
                tail=newNodeTail;
            }
            else{
                tail->next=newNode;
                tail=newNodeTail;
            }
        }
        return res;
    }
};