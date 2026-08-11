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
    int numComponents(ListNode* head, vector<int>& nums) {
        int sum=0;
        unordered_set numSet(nums.begin(),nums.end());
        while(head->next!=NULL){
            if(numSet.count(head->val) && !numSet.count(head->next->val)){
                sum++;
            }
            head=head->next;
        }
        if(numSet.count(head->val)){
            sum++;
        }
        return sum;
    }
};