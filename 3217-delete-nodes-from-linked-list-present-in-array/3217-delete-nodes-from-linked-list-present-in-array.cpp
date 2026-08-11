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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set <int> numSet(nums.begin(),nums.end());
        while(numSet.count(head->val)){
            head=head->next;
        }
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            cout<<temp->val<<endl;
            if(numSet.count(temp->next->val)){
                if(temp->next->next==NULL){
                    temp->next=NULL;
                    break;
                }
                else{
                    temp->next=temp->next->next;
                }
                continue;
            }
            temp=temp->next;
        }
        return head;
    }
};