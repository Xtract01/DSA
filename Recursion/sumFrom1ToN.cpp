/////// Parameterised////////

#include <iostream>
using namespace std;
void sum1ToN(int sum,int n) {
    if(n==0){
        cout<<sum<<endl;
        return;
    }
     
    sum1ToN(sum+n,n-1);
}
int main(){
    int x;
    cout<<"Enter your number ";
    cin>>x;
    sum1ToN(0,x);
}


// #include <iostream>
// using namespace std;
// int sum2(int n) {
//     if(n==0) return 0;
//     return n + sum2(n-1);
// }
// int main(){
//     int x;
//     cout<<"Enter your number ";
//     cin>>x;
//     cout<<sum2(x);
// }

