// Takind the number of rows and columns as n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows an columns ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //no. of stars in each row = n+1-i
        for(int j=1;j<=n+1-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}