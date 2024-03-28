// Taking n as the number of rows
// Taking m as the number of columns

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the no. of rows ";
    cin>>n;
    cout<<"Enter the number of stars in each row ";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }cout<<endl;
    }
}