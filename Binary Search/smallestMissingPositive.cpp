#include<iostream>
using namespace std;
int smallestMissing(int arr[],int n){
    int low = 0;
    int hi = n-1;
    int ans = -1;
    while(low<=hi){
        int mid = low+(hi-low)/2;
        if(arr[mid]==mid) low=mid+1; 
        else {
            ans = mid;
            hi = mid-1;
        }
    }
    return ans;
}


int main(){
    int arr[8] = {0,1,2,4,5,6,9,12};
    cout<<smallestMissing(arr,8);
} 