
//--------------->Two Pass Method

// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
//     vector<int> arr;
//     cout<<"Enter the total number of elements in vector ";
//     int n;
//     cin>>n;
//     cout<<"Enter the elements of vector ";
//     for(int i=0; i<n ;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     int noZ=0;
//     int noO=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0) noZ++;
//         else noO++;
//     }
//     for(int i=0;i<n;i++){
//         if(i<=(noZ-1)) arr[i]=0;
//         else arr[i]=1;
//     }
//     display(arr);
// }    


//-------------->Two Pointer Method

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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
    int i = 0;
    int j= n-1;
    while(i<j){
        if(arr[i]==0) i++;
        if(arr[j]==1) j++;
        if(i>j) break;
        if(arr[i]==1 && arr[j]==0){
            arr[i]=0;
            arr[j]=1;
            i++;
            j--;
        }
    }
    display(arr);
}    