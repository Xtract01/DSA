#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Type in your string ";
    getline(cin,s);
    int i=0;
    int cnt=0;
    while(s[i]!='\0'){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            cnt++;
        }
        i++;
    }
    cout<<cnt;
}