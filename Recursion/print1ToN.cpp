/////// Parameterised////////

#include <iostream>
using namespace std;
void print(int i,int n) {
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
}
int main(){
    int x;
    cout<<"Enter your number ";
    cin>>x;
    print(1,x);
}


// #include <iostream>
// using namespace std;
// void print(int n) {
//     if(n==0) return;
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int x;
//     cout<<"Enter your number ";
//     cin>>x;
//     print(x);
// }