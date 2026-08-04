class Node{
    public:
        int value;
        Node* next;
    Node(int value) {
        this->value=value;
        next=NULL;
    }
};

class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        this->head=NULL;
    }
    
    int get(int index) {
        Node* temp=head;
        for(int i = 0; i < index && temp != NULL; i++) {
            temp = temp->next;
        }
        if(temp==NULL){
            return -1;
        }

        return temp->value;
    }
    
    void addAtHead(int val) {
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    
    void addAtIndex(int index, int val) {
        Node* newNode=new Node(val);
        Node* temp=head;
        if(index==0){
            newNode->next=temp;
            head=newNode;
            return;
        }
        for(int i=0;i<index-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            return;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    
    void deleteAtIndex(int index) {
        if(head==NULL || index<0){
            return;
        }
        if(index==0){
            Node* temp=head;
            head=head->next;
            delete temp;
            return;
        }

        Node* temp=head;

        for(int i=0;i<index-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL || temp->next==NULL){
            return;
        }

        Node* deleteNode=temp->next;
        temp->next=deleteNode->next;
        delete deleteNode;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */