#include<iostream>
using namespace std;
int search(int arr[],int n,int target){
    int low = 0;
    int hi = n-1;
    while(low<=hi){
        int mid = low+(hi-low)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]>target) hi=mid-1;
        else low=mid+1;
    }
    return -1;

}
int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cout<<"Enter the target element ";
    cin>>t;
    cout<<search(arr,n,t);
}