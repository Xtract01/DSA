#include<iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq; //msx heap
    priority_queue<int, vector<int>, greater<int>> minpq;
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(8);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    
}