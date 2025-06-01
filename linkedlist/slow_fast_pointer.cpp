#include "linkedlist.h"
using namespace std;

Node* findMid(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(fast->next != nullptr && slow!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){

    Node *node1 = new Node(1);

    Node *head = node1;
    Node *dummy = head;
    
    for(int i = 2;i<12;i++){
        Node *tmp_node = new Node(i);
        node1->next = tmp_node;
        node1 = node1->next;
    }

    while(dummy!=nullptr){
        cout << dummy->val << endl;
        dummy = dummy->next;
    }


    Node *result = findMid(head);
    cout << result->val << endl;

    


}

