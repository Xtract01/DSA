#include<iostream>
using namespace std;
int lowerBound(int arr[],int n,int x){
    int low = 0;
    int hi = n-1;
    bool flag = false;
    while(low<=hi){
        int mid = low+(hi-low)/2;
        if(arr[mid]==x){
            flag = true;
            return arr[mid-1];
            break;
        } 
        if(arr[mid]<x) low=mid+1;
        else hi=mid-1;
    }
    if(flag==false) return arr[hi];

}
int main(){
    int arr[9] = {1,2,4,5,9,15,18,21,24};
    int x = 12;
    cout<<lowerBound(arr,9,x);
}