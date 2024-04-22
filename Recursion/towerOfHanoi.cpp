#include <iostream>
using namespace std;
void hanoi(int n ,char s,char h,char d){
    if(n==0) return;
    hanoi(n-1,s,d,h);// S --> H
    cout<<s<<" -> "<<d<<endl;
    hanoi(n-1,h,s,d);// H --> D
}
int main(){
    int x;
    cout<<"Type the total no. of discs ";
    cin>>x;
    hanoi(x,'A','B','C');
}