// Takind the number of rows and columns as n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows  ";
    cin>>n;
    int m = n-1; //new line
    for(int q=1;q<=2*n-1;q++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
        for(int j =1;j<=m+1-i;j++){
            cout<<"*";
        }
        for(int k=1 ; k<=2*i-1;k++){
            cout<<" ";
        }
        for(int j =1;j<=m+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}