#include<iostream>
#include<unordered_map>

using namespace std;
                     
int main(){
   unordered_map<string,int> mp;
   pair<string,int>p1;
   p1.first = "Anirudh";
   p1.second = 1;
   mp.insert(p1);
   pair<string,int>p2;
    p2.first = "Anirudh2";   
    p2.second = 2;
    mp["Anirudh3"] = 3;
    mp.insert(p2);
    for(auto ele : mp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<endl;
    mp.erase("Anirudh");
    for(auto ele : mp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<mp.size()<<endl;
}