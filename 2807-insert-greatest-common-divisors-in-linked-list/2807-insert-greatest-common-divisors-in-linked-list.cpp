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

int greatestCommonDivisor(int a,int b){
    int gcd=1;
    int smaller=min(a,b);
    for(int i=1;i<=smaller;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp->next!=NULL){
            ListNode* newNode=new ListNode(greatestCommonDivisor(temp->val,temp->next->val));
            newNode->next=temp->next;
            temp->next=newNode;
            temp=temp->next->next;
        }
        return head;
    }
};