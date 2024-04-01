#include <iostream>
#include<vector>
using namespace std;
void display(vector<int> &a ){
    for(int i=0 ; i<a.size(); i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;

}
void reversePart(int i,int j,vector<int> &v){
    while(i<=j){
        //swap v[i] snd v[j]
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> arr;
    cout<<"Enter the total number of elements in vector ";
    int n;
    cin>>n;
    cout<<"Enter the elements of vector ";
    for(int i=0; i<n ;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    display(arr);
    cout<<"by how many times you want to reverse the array? ";
    int k;
    cin>>k;
    if(k>n) k=k%n;
    reversePart(0,arr.size()-k-1,arr);
    reversePart(arr.size()-k,arr.size()-1,arr);
    reversePart(0,arr.size()-1,arr);
    display(arr);

}