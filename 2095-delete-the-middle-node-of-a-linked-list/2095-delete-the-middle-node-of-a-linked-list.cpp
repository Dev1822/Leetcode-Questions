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
    ListNode* deleteMiddle(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        if(count==0 || count==1){
            return NULL;
        }
        int middle = (count / 2);
        count = 0;
        temp = head;
        while (count != middle-1) {
            temp = temp->next;
            count++;
        }
        temp->next = temp->next->next;
        return head;
    }
};