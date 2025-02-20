#include<iostream>
#include <queue>
using namespace std;
int main(){
    int arr[] = {20,-4,5,1,18,24,-7,56};
    int k = 3;
    int n = sizeof(arr)/4;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<endl;
}