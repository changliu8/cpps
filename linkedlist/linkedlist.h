#include <iostream>

class Node{
public:
    int val;
    Node *next;
    Node(){
        this->next = nullptr;
    }

    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
};
Node* reverse(Node *head);
Node* findMid(Node *head);