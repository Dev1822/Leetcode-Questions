/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    void flat(Node*& res,Node*& tail,Node*& head){
        while(head!=NULL){
            if(head->child!=NULL){
                Node* newNode=new Node(head->val);
                if(res==NULL){
                    res=newNode;
                    tail=newNode;
                }
                else{
                    tail->next=newNode;
                    newNode->prev=tail;
                    tail=newNode;
                }
                Node* temp=head->child;
                flat(res,tail,temp);
            }
            else{
                Node* newNode=new Node(head->val);
                if(res==NULL){
                    res=newNode;
                    tail=newNode;
                }
                else{
                    tail->next=newNode;
                    newNode->prev=tail;
                    tail=newNode;
                }
            }
            head=head->next;
        }
    }
    Node* flatten(Node* head) {
        Node* res=NULL;
        Node* tail=NULL;
        flat(res,tail,head);
        return res;
    }
};