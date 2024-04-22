#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void printSubset(string ans , string original ,vector<string> &v, bool flag){
    if(original==""){
       v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.size()==1){
        if(flag==true) printSubset(ans+ch,original.substr(1),v,true);
        printSubset(ans,original.substr(1),v,true);
        return; 
    }
    char dh=original[1];
    if(ch==dh){
        if(flag==true) printSubset(ans+ch,original.substr(1),v,true);
        printSubset(ans,original.substr(1),v,false);
    }
    else{
        if(flag==true)printSubset(ans+ch,original.substr(1),v,true);
        printSubset(ans,original.substr(1),v,true);
    }
}
int main(){
    string str = "abac";
    sort(str.begin(),str.end());
   
    vector<string> v;
    printSubset("",str,v,true);
    for(string el: v){
        cout<<el<<endl;
    }
}

    