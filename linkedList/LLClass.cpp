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
class LinkedList{
public:    
    Node *head;
    Node *tail;
    int size;
    LinkedList(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node *temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;

    }
    void insertAtHead(int val){
        Node *temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = head;
            head = temp;
        }
        size++;

    }
    void insertAtIdx(int idx,int val){
       if(idx<0 || idx>size) cout<<"Invalid index";
       else if(idx==0){
        insertAtHead(val);
       }
       else if(idx==size){
        insertAtEnd(val);
       }
        else{
            Node *temp = new Node(val);
        }
        size++;

    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};
int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtHead(50);
}