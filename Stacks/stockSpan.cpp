<<<<<<< HEAD
#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pgI [n];
    stack<int> st;
    pgI[0] = 1;
    st.push(0);
    for(int i=1;i<=n-1;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
        if(st.empty()) pgI[i] = -1;
        else pgI[i] = st.top();
        pgI[i] = i-pgI[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pgI[i]<<" ";
    }
    cout<<endl;

=======
#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pgI [n];
    stack<int> st;
    pgI[0] = 1;
    st.push(0);
    for(int i=1;i<=n-1;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
        if(st.empty()) pgI[i] = -1;
        else pgI[i] = st.top();
        pgI[i] = i-pgI[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<pgI[i]<<" ";
    }
    cout<<endl;

>>>>>>> b218f4bcb23e0b44d0ac0a8c543ca629d035929c
}