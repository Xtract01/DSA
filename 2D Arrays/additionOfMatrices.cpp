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
    int brr[m][n];

    //Input
    cout<<"Enter the elements in first array "<<endl;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }

    }
     cout<<"Enter the elements in second array "<<endl;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }

    }
    int res[m][n];
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j]=arr[i][j]+brr[i][j];
        }

    }
    cout<<endl;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;

    }

}    