#include <iostream>
using namespace std;
int pow(int x,int n){
    if(n==1) return x;
    int ans = pow(x,n/2);
    if(n%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*x;
    }

}
int main(){
    int x;
    cout<<"Enter your base number ";
    cin>>x;
    int n;
    cout<<"Enter the exponent ";
    cin>>n;
    cout<<pow(x,n);
}
