// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> &a ){
//     for(int i=0 ; i<a.size(); i++){
//         cout<<a[i]<<" ";

//     }
//     cout<<endl;

// }
// int main(){
//     vector<int> v;
//     cout<<"Enter the total number of elements in vector ";
//     int n;
//     cin>>n;
//     cout<<"Enter the elements of vector ";
//     for(int i=0; i<n ;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     display(v);

//     vector<int> v2(v.size());
//     for(int i=0;i<v2.size();i++){
//         //i+j=size-1;
//         int j= v.size()-1-i;
//         v2[i]=v[j];

//     }
//     display(v2);
// }
  

//2 pointer approach 

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a ){
    for(int i=0 ; i<a.size(); i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;

}
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
    display(v);
    
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        //swap v[i] snd v[j]
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }

    display(v);


    
}
  