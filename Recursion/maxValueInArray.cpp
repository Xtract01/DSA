#include <iostream>
#include<limits.h>
using namespace std;
void printMax(int arr[],int n, int idx,int max){
    if(idx==n){
        cout<<max<<endl;
        return;
    } 
    if(arr[idx]>max) max=arr[idx];
    printMax(arr,n,idx+1,max);
}
int MaxInArray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],MaxInArray(arr,n,idx+1));
}
int main(){
    int arr[] = {1,4,9,5,3,21,3};
    int n = sizeof(arr)/sizeof(arr[0]); 
    printMax(arr,n,0,INT_MIN);
    cout<<MaxInArray(arr,n,0);
}