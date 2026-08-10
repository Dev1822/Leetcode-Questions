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
    int getDecimalValue(ListNode* head) {
        ListNode* reversed=NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* newNode=new ListNode(temp->val);
            newNode->next=reversed;
            reversed=newNode;
            temp=temp->next;
        }
        int power=0;
        int res=0;
        while(reversed!=NULL){
            res+=((reversed->val)*(pow(2,power)));
            reversed=reversed->next;
            power++;
        }
        return res;
    }
};