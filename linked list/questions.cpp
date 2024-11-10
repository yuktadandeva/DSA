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

ListNode* getNode(ListNode* temp, int j){
    
    while( j-- and temp!= NULL){
        temp = temp->next;
    }
    return temp;
}

void printLinkedList(ListNode* head){
    while(head!= NULL){
    cout<< head->val <<" ";
    head = head->next;
    }
    cout<<endl;
}

int getLength(ListNode* head){
    
    if(head == NULL){
        return 0;
    }
    
    int cnt = getLength(head->next);
    return cnt + 1;
}

bool isPresent(ListNode* head, int value){
    while(head!= NULL){
        if(head->val == value){
           return true; 
        } 
        head = head->next;
    }
    
    return false;
}

bool isPresentRecursively(ListNode* head, int value){
    
    if(head == NULL){
        return false;
    }
    
    if(head->val == value or isPresentRecursively(head->next,value)){
        return true;
    }
    
    return false;
}

ListNode* reverseLinkedList(ListNode*& head){
    ListNode* prev = NULL;
    ListNode* cur = head;
    
    while(cur!= NULL){
    ListNode* nextcur = cur->next;
    cur->next = prev;
    prev = cur;
    cur = nextcur;
    }
    
    return prev;
}

int main() {
    ListNode* head = NULL; //linked list is empty
    
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    
    printLinkedList(head);
    
    head = reverseLinkedList(head);
    
    printLinkedList(head);
    // cout<<getLength(head);
    
    // isPresentRecursively(head,60)?cout<<"true":cout<<"false";
    
    // insertAtTail(head, 60);
    
    // printLinkedList(head);
    
    // insertAtRandom(head, 25, 2);
    // printLinkedList(head);
    return 0;
}