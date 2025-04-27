#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.erase(2);
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    int target = 4;
    //s.find() searches in the set and if it is not found it returns s.end()
    if(s.find(target)!=s.end()){ //target exists
        cout<<"exists";
    }
    else cout<<"not exists";

}