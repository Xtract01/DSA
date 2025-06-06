<<<<<<< HEAD
#include <iostream>
#include <stack>
using namespace std;
int prio(char ch){
    if(ch=='+'|| ch=='-') return 1;
    else return 2;
}
string solve(string val1,string val2,char ch){
    string s = "";
    s+=val1;
    s+=val2;
    s.push_back(ch);
    return s;
}
int main(){
    // int x = 2+6*4/8-3;
    string s = "(2+4)*4/8-3";//infix expression
   // we need 2 stacks
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        //check if s[i] is a digit
        int ascii = (int) (s[i]);
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
            //s[i] is an operator
            if(op.empty() ) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                   char ch = op.top();
                   op.pop();
                   string val2=val.top();
                   val.pop();
                   string val1=val.top();
                   val.pop();
                   string ans = solve(val1,val2,ch);
                   val.push(ans);
                }
                op.pop();
            }
            else if( prio(s[i])>prio(op.top())) op.push(s[i]);
            else{
                //work on the top 2 elements of val stack
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                   char ch = op.top();
                   op.pop();
                   string val2=val.top();
                   val.pop();
                   string val1=val.top();
                   val.pop();
                   string ans = solve(val1,val2,ch);
                   val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
=======
#include <iostream>
#include <stack>
using namespace std;
int prio(char ch){
    if(ch=='+'|| ch=='-') return 1;
    else return 2;
}
string solve(string val1,string val2,char ch){
    string s = "";
    s+=val1;
    s+=val2;
    s.push_back(ch);
    return s;
}
int main(){
    // int x = 2+6*4/8-3;
    string s = "(2+4)*4/8-3";//infix expression
   // we need 2 stacks
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        //check if s[i] is a digit
        int ascii = (int) (s[i]);
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
            //s[i] is an operator
            if(op.empty() ) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                   char ch = op.top();
                   op.pop();
                   string val2=val.top();
                   val.pop();
                   string val1=val.top();
                   val.pop();
                   string ans = solve(val1,val2,ch);
                   val.push(ans);
                }
                op.pop();
            }
            else if( prio(s[i])>prio(op.top())) op.push(s[i]);
            else{
                //work on the top 2 elements of val stack
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                   char ch = op.top();
                   op.pop();
                   string val2=val.top();
                   val.pop();
                   string val1=val.top();
                   val.pop();
                   string ans = solve(val1,val2,ch);
                   val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
>>>>>>> b218f4bcb23e0b44d0ac0a8c543ca629d035929c
}