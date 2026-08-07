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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL || left==right){
            return head;
        }
        ListNode* first=NULL;
        ListNode* tail=NULL;
        ListNode* reversed=NULL;
        int position=1;
        if(left!=1){
            while(position<left){
                ListNode* newNode=new ListNode(head->val);
                if(first==NULL){
                    first=newNode;
                    tail=newNode;
                    head=head->next;
                    position++;
                    continue;
                }
                tail->next=newNode;
                tail=newNode;
                head=head->next;
                position++;
            }
        }
        while(head!=NULL && position<=right){
            ListNode* newNode=new ListNode(head->val);
            newNode->next=reversed;
            reversed=newNode;
            head=head->next;
            position++;
        }
        while (reversed != NULL) {
            ListNode* newNode=new ListNode(reversed->val);
            if(tail==NULL){
                first=newNode;
                tail=newNode;
            } 
            else{
                tail->next=newNode;
                tail=newNode;
            }
            reversed=reversed->next;
        }
        if(head!=NULL){
            tail->next=head;
            tail=head;
        }
        return first;
    }
};