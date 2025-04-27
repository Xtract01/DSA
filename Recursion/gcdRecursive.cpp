#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int main(){
    int a = 9;
    int b = 18;
    cout<<gcd(a,b);
}