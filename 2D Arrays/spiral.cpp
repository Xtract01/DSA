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
    cout<<"Enter the elements in first array "<<endl;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }

    }
    cout<<endl;
    //spiral
    int count =0;
    int tne=n*m;
    int minr=0,minc=0,maxr=m-1,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //Right
        for(int j=minc;j<=maxc && count<tne;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;

        //Down
        for(int i=minr;i<=maxr && count<tne;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
     
        //Left
        for(int j=maxc;j>=minc && count<tne;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        //Up
        for(int i=maxr;i>=minr && count<tne;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}    