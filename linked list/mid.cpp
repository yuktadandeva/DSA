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

void printLinkedList(ListNode* head){
    while(head!= NULL){
    cout<< head->val <<" ";
    head = head->next;
    }
    cout<<endl;
}

ListNode* findMidPoint(ListNode* head){
    if(head == NULL){
        return NULL;
    }
    ListNode* slow = head;
    ListNode* fast = head->next;
    
    while(fast!=NULL and fast->next !=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    ListNode* head = NULL; //linked list is empty
    
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head);
    
    ListNode* mid = findMidPoint(head);
    if(mid == NULL){
        cout<<"empty linked list"<<endl;
    }else{
        cout<<mid->val;
    }

    return 0;
}