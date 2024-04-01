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
    int x;
    cout<<"Enter the element to search ";
    cin>>x;

    //check mark 

    bool flag = false;
    for(int i=0; i<=n-1 ; i++){
        if(arr[i]==x) {
           flag = true;
        }

    }
    if(flag==true) cout<<"Element is present";
    else cout<<"Element is not present";

}