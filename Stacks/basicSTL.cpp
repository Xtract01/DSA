#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(10);
     st.push(20);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.push(50);
    st.push(60);
    st.push(70);
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    while(st.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}