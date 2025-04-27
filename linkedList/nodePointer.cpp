<<<<<<< HEAD
#include <iostream>
using namespace std;
class Node { // Linked list node
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int display (Node* head){
    Node* temp = head;
   while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
};
void displayRec(Node* head){
   if(head==NULL) return;
   cout<<head->val<<" ";
   displayRec(head->next);
};
int main(){
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    displayRec(a);
}  

=======
#include <iostream>
using namespace std;
class Node { // Linked list node
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int display (Node* head){
    Node* temp = head;
   while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
};
void displayRec(Node* head){
   if(head==NULL) return;
   cout<<head->val<<" ";
   displayRec(head->next);
};
int main(){
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    displayRec(a);
}  

>>>>>>> b218f4bcb23e0b44d0ac0a8c543ca629d035929c
