#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    string arr[n];
    cout<<"Enter the elements in array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = stoi(arr[0]);
    int maxIdx = -1;
    for(int i=1;i<n;i++){
        int x= stoi(arr[i]);
        if(x>max){
            max = x;
            maxIdx=i;

        } 
    }
    cout<<max;
    cout<<maxIdx;

}