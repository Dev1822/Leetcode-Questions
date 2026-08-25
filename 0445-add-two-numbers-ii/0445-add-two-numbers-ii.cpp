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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* reversedl1=NULL;
        ListNode* reversedl2=NULL;
        while(l1!=NULL){
            ListNode* newNode=new ListNode(l1->val);
            newNode->next=reversedl1;
            reversedl1=newNode;
            l1=l1->next;
        }
        while(l2!=NULL){
            ListNode* newNode=new ListNode(l2->val);
            newNode->next=reversedl2;
            reversedl2=newNode;
            l2=l2->next;
        }
        int carry=0;
        ListNode* res=NULL;
        while(reversedl1!=NULL || reversedl2!=NULL){
            int sum=0;
            if(reversedl1==NULL){
                sum=reversedl2->val + carry;
                reversedl2=reversedl2->next;
            }
            else if(reversedl2==NULL){
                sum=reversedl1->val + carry;
                reversedl1=reversedl1->next;
            }
            else{
                sum=reversedl1->val + reversedl2->val + carry;
                reversedl1=reversedl1->next;
                reversedl2=reversedl2->next;
            }
            
            cout<<sum<<endl;
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            ListNode* newNode=new ListNode(sum);
            newNode->next=res;
            res=newNode;
        }
        if(carry>0){
            ListNode* newNode=new ListNode(carry);
            newNode->next=res;
            res=newNode;
        }
        return res;
    }
};