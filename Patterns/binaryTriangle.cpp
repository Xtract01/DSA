// Takind the number of rows and columns as n

//Method 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows an columns ";
//     cin>>n;
//     int a;
//     for(int i=1;i<=n;i++){
//         if(i%2==0) a=0;
//         else a=1;
//         for(int j=1;j<=i;j++){
//             cout<<a<<" " ;
//             //flipping
//             if(a==1) a=0;
//             else a=1;
//         }
//         cout<<endl;
//     }
// }


//Method 2 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows an columns ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<1<<" " ;
            else cout<<0<<" " ;
          
        }
        cout<<endl;
    }
}
