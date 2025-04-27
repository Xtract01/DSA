#include <iostream>
using namespace std;
void generate(string s,int n){
    if(s.size()==n){
        cout<<s<<" ";
        return;
    }
    generate(s+'0',n);
    if(s=="") generate(s+'1',n);    
    else if(s[s.size()-1]=='0') generate(s+'1',n);   
    
}
int main(){
    cout<<"Type the no. of digits ";
    int n;
    cin>>n;
    generate("",n);
}