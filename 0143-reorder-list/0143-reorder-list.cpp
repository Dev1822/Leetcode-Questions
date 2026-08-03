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
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return;

        int length = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        ListNode *head1 = NULL;
        ListNode *tail1 = NULL;
        ListNode *head2 = NULL;

        temp = head;
        int count = 0;

        while (temp != NULL) {
            if (count <= (length - 1) / 2) {
                ListNode* newNode = new ListNode(temp->val);

                if (head1 == NULL) {
                    head1 = newNode;
                    tail1 = newNode;
                } else {
                    tail1->next = newNode;
                    tail1 = tail1->next;
                }
            } else {
                ListNode* newNode = new ListNode(temp->val);
                newNode->next = head2;
                head2 = newNode;
            }

            temp = temp->next;
            count++;
        }

        temp = head;

        while (head1 != NULL && head2 != NULL) {
            temp->val = head1->val;
            temp = temp->next;
            head1 = head1->next;

            temp->val = head2->val;
            temp = temp->next;
            head2 = head2->next;
        }

        while (head1 != NULL) {
            temp->val = head1->val;
            temp = temp->next;
            head1 = head1->next;
        }
    }
};