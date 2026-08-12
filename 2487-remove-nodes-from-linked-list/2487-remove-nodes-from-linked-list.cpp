class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* reversed=NULL;
        while(head!=NULL){
            ListNode* newNode=new ListNode(head->val);
            newNode->next=reversed;
            reversed=newNode;
            head=head->next;
        }
        ListNode* tail=reversed;
        while(tail->next!=NULL){
            if(tail->val <= tail->next->val){
                tail=tail->next;
            }
            else{
                tail->next=tail->next->next;
                tail=reversed;
            }
        }
        ListNode* res=NULL;
        while(reversed!=NULL){
            ListNode* newNode=new ListNode(reversed->val);
            newNode->next=res;
            res=newNode;
            reversed=reversed->next;
        }
        return res;
    }
};