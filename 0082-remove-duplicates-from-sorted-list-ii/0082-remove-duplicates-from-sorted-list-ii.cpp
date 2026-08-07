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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map <int,int> freq={};
        ListNode* temp=head;
        while(temp!=NULL){
            freq[temp->val]++;
            temp=temp->next;
        }
        ListNode* res=NULL;
        ListNode* tail=NULL;
        temp=head;
        while(temp!=NULL){
            if(freq[temp->val]==1){
                ListNode* newNode=new ListNode(temp->val);
                if(res==NULL){
                    res=newNode;
                    tail=newNode;
                }
                else{
                    tail->next=newNode;
                    tail=newNode;
                }
            }
            temp=temp->next;
        }
        return res;
    }
};