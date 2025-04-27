// Takind the number of rows and columns as n

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows an columns ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            // If instead of i we put n+1-i then a reverse right angled triangle with numbers will be printed
            cout<<j<<" ";
        }
        cout<<endl;
    }
}