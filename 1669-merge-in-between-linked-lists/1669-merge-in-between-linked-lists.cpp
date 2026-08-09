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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* head=list1;
        ListNode* tail=list1;
        for(int position=0;position<a-1;position++){
            head=head->next;
            tail=tail->next;
        }
        for(int position=a;position<=b;position++){
            tail=tail->next;
        }
        tail=tail->next;
        head->next=list2;
        while(head->next!=NULL){
            head=head->next;
        }
        head->next=tail;
        return list1;
    }
};