#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of Array ";

    //Taking Input
    for(int i=0; i<=n-1 ; i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0;i<=n-1; i++){
        sum = sum + arr[i];
    }

    cout<<"The sum of all the elements in the array is "<<sum;
}