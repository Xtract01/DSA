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
    int min = arr[0]; 
    for(int i=0;i<=n-1;i++){
        if(arr[i]< min){
            min=arr[i];
        }
    }
    cout<<"The smallest element in an array is "<<min;
}