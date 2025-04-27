#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements ";
    
    //Taking input
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int max = arr[0]; // We can alse use int max = INT_MIN
    for(int i =0;i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The largest element in an array is "<<max;
}