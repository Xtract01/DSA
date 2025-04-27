<<<<<<< HEAD
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
=======
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
>>>>>>> b218f4bcb23e0b44d0ac0a8c543ca629d035929c
}