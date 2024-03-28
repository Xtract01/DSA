// Takind the number of rows and columns as n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows an columns ";
    cin>>n;
    int k = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" " ;
            k++;
        }
        cout<<endl;
    }
}