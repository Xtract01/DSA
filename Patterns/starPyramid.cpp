// Takind the number of rows and columns as n

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows an columns ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         //spaces
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         //odd star triangle
//         for(int k=1 ;k<=2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


//Method 2
// Takind the number of rows and columns as n

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows an columns ";
    cin>>n;
    int nst = 1;// no. of stars
    int nsp = n-1; //no. of spaces
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        for(int k=1 ;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
}