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
    vector<int> nextLargerNodes(ListNode* head) {
        vector <int> res={};
        ListNode* tail=head;
        while(head!=NULL){
            int check=head->val;
            while(tail!=NULL && tail->val<=check){
                tail=tail->next;
            }
            if(tail==NULL){
                res.push_back(0);
            }
            else{
                res.push_back(tail->val);
            }
            head=head->next;
            tail=head;
        }
        return res;
    }
};