<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
   int arr[] ={3,-4,-7,30,7,-9,2,1,6,-1};
   int k = 1;
   int n = sizeof(arr)/sizeof(arr[0]);
   //-4 -4 -7 -9 -9 -9 0 -1 -> O/P
    vector<int> ans;
    queue<int> q;
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    int i=0;
    while(i+k<=n){
        while(q.size()>0 && q.front()<i ) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        ans.push_back(arr[q.front()]);
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
=======
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
   int arr[] ={3,-4,-7,30,7,-9,2,1,6,-1};
   int k = 1;
   int n = sizeof(arr)/sizeof(arr[0]);
   //-4 -4 -7 -9 -9 -9 0 -1 -> O/P
    vector<int> ans;
    queue<int> q;
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    int i=0;
    while(i+k<=n){
        while(q.size()>0 && q.front()<i ) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        ans.push_back(arr[q.front()]);
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
>>>>>>> b218f4bcb23e0b44d0ac0a8c543ca629d035929c
}