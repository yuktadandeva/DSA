#include <iostream>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode* next;
        
        ListNode(int val){
            this->val = val;
            this->next = NULL; 
        }
};

void insertAtHead(ListNode*& head, int val){
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;
}

ListNode* getTail(ListNode* head){
    while(head->next != NULL){
        head = head->next;
    }
    return head;
}

void insertAtTail(ListNode*& head, int val){
    
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    
    ListNode* n = new ListNode(val);
    ListNode* tail = getTail(head);
    
    tail->next = n;
}

ListNode* getNode(ListNode* temp, int j){
    
    while( j-- and temp!= NULL){
        temp = temp->next;
    }
    return temp;
}

void insertAtRandom(ListNode*& head, int val, int i){
    
    if(i==0){
        insertAtHead(head, val);
        return;
    }
    
    ListNode* n = new ListNode(val);
    ListNode* prev = getNode(head, i-1);
    
    if(prev == NULL){
        return;
    }
    
    n->next = prev->next;
    prev->next = n;
}

void printLinkedList(ListNode* head){
    while(head!= NULL){
    cout<< head->val <<" ";
    head = head->next;
    }
    cout<<endl;
}

void deleteAtHead(ListNode*& head){
    if(head==NULL){
        return;
    }
    
    ListNode* temp = head;
    head = head->next;
    delete temp;
    
}

void deleteAtTail(ListNode* head){
    
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    
    ListNode* prev = NULL;
    ListNode* cur = head;
    
    while(cur->next!= NULL){
        prev = cur;
        cur = cur->next;
    }
    
    prev->next = NULL;
    delete cur;
}

void deleteAtIndex(ListNode*& head,int i){
    
    if(i == 0){
        deleteAtHead(head);
        return;
    }
    
    ListNode* prev = getNode(head, i-1);
    if(prev == NULL){
        return;
    }
    ListNode* cur = prev->next;
    if(cur == NULL){
        return;
    }
    prev->next = cur->next;
    delete cur;
}

int main() {
    ListNode* head = NULL; //linked list is empty
    
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    
    deleteAtHead(head);
    printLinkedList(head);
    
    deleteAtTail(head);
    printLinkedList(head);
    
    deleteAtIndex(head, 2);
    printLinkedList(head);
    // printLinkedList(head);
    
    // insertAtTail(head, 60);
    
    // printLinkedList(head);
    
    // insertAtRandom(head, 25, 2);
    // printLinkedList(head);
    return 0;
}