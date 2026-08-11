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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* res=NULL;
        ListNode* tail=NULL;
        int sum=0;
        int zeroes=0;
        while(head!=NULL){
            if(head->val==0){
                zeroes++;
                if(zeroes!=1){
                    ListNode* newNode=new ListNode(sum);
                    if(res==NULL){
                        res=newNode;
                        tail=newNode;
                    }
                    else{
                        tail->next=newNode;
                        tail=newNode;
                    }
                    sum=0;
                }
            }
            else{
                sum+=head->val;
            }
            head=head->next;
        }
        return res;
    }
};