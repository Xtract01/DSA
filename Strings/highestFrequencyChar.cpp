#include <iostream>
#include <string>
#include <vector>
# include <algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string ";
    cin>>s;
    vector<int> v(26,0);
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int ascii=(int)ch;
        v[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>max) max=v[i];
    }
    for(int i=0;i<26;i++){
        if(v[i]==max){
            int ascii=i+97;
            char ch=char(ascii);
            cout<<ch<<" "<<max<<endl;
        }
    }
}    