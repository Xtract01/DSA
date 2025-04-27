#include <iostream>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    int x;
    cout<<"Enter base: ";
    cin>>x;
    int y;
    cout<<"Enter exponent: ";
    cin>>y;
    cout<<pow(x,y); 
}