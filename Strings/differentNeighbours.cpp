#include <iostream>
#include <string>
# include <algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string ";
    cin>>s;
    int count=0;
    int len = s.size();
    for(int i=0;i<len;i++){
        if(len==1){
            break;
        }
        if(i=0){
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==len-1){
            if(s[i]!=s[i-1]) count++;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]) count++;
    }
    cout<<count;
}