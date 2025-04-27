#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the total number of rows ";
    cin>>m;
    int n;
    cout<<"Enter the total number of columns ";
    cin>>n;
    int arr[m][n];
    //Input
    cout<<"Enter the elements in array "<<endl;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //Printing transpose
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}