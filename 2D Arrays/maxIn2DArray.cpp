#include<iostream>
#include <climits>
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
    cout<<"Enter the elements "<<endl;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }

    }
    int max = INT_MIN;
    for(int i=0 ;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max) max=arr[i][j];
        }
    }

    cout<<"Max element of the array is "<<max;
}
