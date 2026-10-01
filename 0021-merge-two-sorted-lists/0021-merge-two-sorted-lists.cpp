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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res=NULL;
        ListNode* tail=NULL;
        while(list1!=NULL && list2!=NULL){
            ListNode* newNode=NULL;
            if(list1->val<list2->val){
                newNode=new ListNode(list1->val);
                list1=list1->next;
            }
            else{
                newNode=new ListNode(list2->val);
                list2=list2->next;
            }
            if(res==NULL){
                res=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
        }
        if(list1!=NULL){
            while(list1!=NULL){
                ListNode* newNode=new ListNode(list1->val);
                if(res==NULL){
                    res=newNode;
                    tail=newNode;
                }
                else{
                    tail->next=newNode;
                    tail=newNode;
                }
                list1=list1->next;
            }
        }
        if(list2!=NULL){
            while(list2!=NULL){
                ListNode* newNode=new ListNode(list2->val);
                if(res==NULL){
                    res=newNode;
                    tail=newNode;
                }
                else{
                    tail->next=newNode;
                    tail=newNode;
                }
                list2=list2->next;
            }
        }
        return res;
    }
};