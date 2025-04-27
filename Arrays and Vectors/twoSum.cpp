#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Enter the total number of elements in vector ";
    int n;
    cin>>n;
    cout<<"Enter the elements of vector ";
    for(int i=0; i<n ;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter the target element ";
    int target;
    cin>>target;
    for(int i=0;i<n-1;i++){
        for(int j =i+1 ;j<n;j++){
            if(v[i]+v[j]== target){
                cout<<"("<<i<<","<<j<<")"<<" ";
            }
        }
    }
}
   