#include<iostream>
using namespace std;
int countSetBits(int n){
    int count = 0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
int main(){
    cout<<countSetBits(13)<<"\n";
    cout<<__builtin_popcount(13)<<"\n";
}