<<<<<<< HEAD
#include<iostream>
#include<climits>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void nthLevel(Node *root, int curr, int level){
    if(root == NULL) return;
    if(curr == level){
        cout << root->val << " ";
        return;
    }
    nthLevel(root->left, curr + 1, level);
    nthLevel(root->right, curr + 1, level);
}
Node * construct(int arr[],int n){
    queue<Node *>q;
    Node *root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j =2;
    while(!q.empty() && i<n){
        Node *temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN){
            l=new Node(arr[i]);
        }
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN){
            r=new Node(arr[j]);
        }
        else r=NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;

    }
    return root;
}
/// Breadth Firt Search Traversal 
void levelOrderQueue(Node *root){
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);

    }
    cout<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node * root = construct(arr,n);
    cout<<endl;
    levelOrderQueue(root);
=======
#include<iostream>
#include<climits>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void nthLevel(Node *root, int curr, int level){
    if(root == NULL) return;
    if(curr == level){
        cout << root->val << " ";
        return;
    }
    nthLevel(root->left, curr + 1, level);
    nthLevel(root->right, curr + 1, level);
}
Node * construct(int arr[],int n){
    queue<Node *>q;
    Node *root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j =2;
    while(!q.empty() && i<n){
        Node *temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN){
            l=new Node(arr[i]);
        }
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN){
            r=new Node(arr[j]);
        }
        else r=NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;

    }
    return root;
}
/// Breadth Firt Search Traversal 
void levelOrderQueue(Node *root){
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);

    }
    cout<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node * root = construct(arr,n);
    cout<<endl;
    levelOrderQueue(root);
>>>>>>> b218f4bcb23e0b44d0ac0a8c543ca629d035929c
};