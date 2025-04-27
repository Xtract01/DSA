<<<<<<< HEAD
#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int nge [n];
    stack<int> st;
    nge[n-1] = -1;
    for(int i=n-1;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        if(st.empty()) nge[i] = -1;
        else nge[i] = st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;

=======
#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int nge [n];
    stack<int> st;
    nge[n-1] = -1;
    for(int i=n-1;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        if(st.empty()) nge[i] = -1;
        else nge[i] = st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;

>>>>>>> b218f4bcb23e0b44d0ac0a8c543ca629d035929c
}