#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    string s1;
    cout<<"Enter your string 1 ";
    cin>>s;
    cout<<"Enter your string 2 ";
    cin>>s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s==s1) cout<<"true";
    else cout<<"false";
}    