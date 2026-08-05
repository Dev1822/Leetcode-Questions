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
    bool isPalindrome(ListNode* head) {
        ListNode* reversed=NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* newNode=new ListNode(temp->val);
            newNode->next=reversed;
            reversed=newNode;
            temp=temp->next;
        }
        while(head!=NULL){
            if((head->val)!=(reversed->val)){
                return false;
            }
            head=head->next;
            reversed=reversed->next;
        }
        return true;
    }
};