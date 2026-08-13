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
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        ListNode* reversed=NULL;
        while(temp!=NULL){
            ListNode* newNode=new ListNode(temp->val);
            newNode->next=reversed;
            reversed=newNode;
            temp=temp->next;
        }
        int maxSum=INT_MIN;
        while(head!=NULL){
            maxSum=max(maxSum,head->val+reversed->val);
            head=head->next;
            reversed=reversed->next;
        }
        return maxSum;
    }
};