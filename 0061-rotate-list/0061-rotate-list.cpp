class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;

        int length = 0;
        ListNode* temp = head;

        while(temp != NULL){
            length++;
            temp = temp->next;
        }

        k %= length;

        if(k == 0)
            return head;

        ListNode* reversed = NULL;
        temp = head;

        while(temp != NULL){
            ListNode* newNode = new ListNode(temp->val);
            newNode->next = reversed;
            reversed = newNode;
            temp = temp->next;
        }

        int position = 1;
        ListNode* first = NULL;

        while(position <= k){
            ListNode* newNode = new ListNode(reversed->val);
            newNode->next = first;
            first = newNode;
            reversed = reversed->next;
            position++;
        }
        ListNode* tail = NULL;
        while(position <= length){
            ListNode* newNode = new ListNode(reversed->val);
            newNode->next = tail;
            tail = newNode;
            reversed = reversed->next;
            position++;
        }
        ListNode* connect = first;
        while(connect->next != NULL){
            connect = connect->next;
        }

        connect->next = tail;

        return first;
    }
};