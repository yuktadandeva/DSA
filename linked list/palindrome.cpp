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
ListNode* reverseLinkedList(ListNode* head){
    if(head == NULL){
        return head;
    }
    
    if(head->next == NULL){
        return head;
    }
    
    ListNode* hff = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return hff;
}

bool palindrome(ListNode* head){
    ListNode* mid = findMidPoint(head);
    
    ListNode* head2 = reverseLinkedList(mid);
    
    while(head2->next!=NULL){
        if(head->val != head2->val){
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }
    
    return true;
}
int main() {
    ListNode* head = NULL; //linked list is empty
    
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 20);
    insertAtHead(head, 40);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    // printLinkedList(head);
    palindrome(head)?cout<<"true":cout<<"false";
    
 
  
  

    return 0;
}