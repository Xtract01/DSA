#include <iostream>
using namespace std;
int main(){
    int x  =23;
    int y = 31;
    cout<<"The no. of flip bits required are "<<__builtin_popcount(x^y)<<endl;
}