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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> res={};
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        int equallyDivide=length/k;
        int leftElements=length%k;
        int elements=equallyDivide;
        while(k!=0){
            if(leftElements!=0){
                elements++;
                leftElements--;
            }
            ListNode* node=NULL;
            ListNode* tail=NULL;
            while(elements!=0){
                ListNode* newNode=new ListNode(head->val);
                if(node==NULL){
                    node=newNode;
                    tail=newNode;
                }
                else{
                    tail->next=newNode;
                    tail=newNode;
                }
                elements--;
                head=head->next;
            }
            res.push_back(node);
            k--;
            elements=equallyDivide;
        }
        return res;
    }
};