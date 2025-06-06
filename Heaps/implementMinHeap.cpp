<<<<<<< HEAD
#include <iostream>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;
        while(i!=1){
            int parent = i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
            i = parent;
        }
    }
    int size(){
        return idx-1;
    }
    void display(){
        for(int i = 1 ; i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
    }
    void pop(){
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        while(true){
            int left = 2*i;
            int right = 2*i+1;
            if(left>idx-1) break;
            if(right>idx-1){
                if(arr[left]<arr[i]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                break;
            }
            if(arr[left]<arr[right] ){
                if(arr[left]<arr[i]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else break;
               
            }
            else{
                if(arr[right]<arr[i]){
                    swap(arr[i],arr[right]);
                    i=right;
                }
                else break;
            }
        }
    }

};
int main(){
   MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.display();
    cout<<pq.size()<<endl;
  
    cout<<pq.top()<<endl;
    pq.pop();
    pq.display();

=======
#include <iostream>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;
        while(i!=1){
            int parent = i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
            i = parent;
        }
    }
    int size(){
        return idx-1;
    }
    void display(){
        for(int i = 1 ; i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
    }
    void pop(){
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        while(true){
            int left = 2*i;
            int right = 2*i+1;
            if(left>idx-1) break;
            if(right>idx-1){
                if(arr[left]<arr[i]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                break;
            }
            if(arr[left]<arr[right] ){
                if(arr[left]<arr[i]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else break;
               
            }
            else{
                if(arr[right]<arr[i]){
                    swap(arr[i],arr[right]);
                    i=right;
                }
                else break;
            }
        }
    }

};
int main(){
   MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.display();
    cout<<pq.size()<<endl;
  
    cout<<pq.top()<<endl;
    pq.pop();
    pq.display();

>>>>>>> b218f4bcb23e0b44d0ac0a8c543ca629d035929c
}