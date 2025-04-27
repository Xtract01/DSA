#include<iostream>
using namespace std;
int firstOccurance(int arr[],int n,int x){
    int low = 0;
    int hi = n-1;
    bool flag = false;
    while(low<=hi){
        int mid = low+(hi-low)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                return mid;
                break;
            }
            else hi=mid-1;
        } 
        if(arr[mid]<x) low=mid+1;
        else hi=mid-1;
    }
    if(flag==false) return -1;

}


int main(){
    int arr[13] = {1,2,2,3,3,3,3,4,4,5,5,9};
    int x = 4;
    cout<<firstOccurance(arr,13,x);
}    