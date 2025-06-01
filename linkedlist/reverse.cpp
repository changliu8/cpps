#include "linkedlist.h"

using namespace std;

Node* reverse(Node *l1){
    Node *prev = nullptr;

    while(l1!=nullptr){
        Node *next = l1->next;
        l1->next = prev;
        prev = l1;
        l1 = next;
    }

    return prev;
    
}

int main(){
    
    Node *node1 = new Node(1);

    Node *head = node1;
    for(int i = 2;i<11;i++){
        Node *tmp_node = new Node(i);
        node1->next = tmp_node;
        node1 = node1->next;
    }

    head = reverse(head);

    while(head!=nullptr){
         cout << head->val << endl;
         head = head->next;
    }

}