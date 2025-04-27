<<<<<<< HEAD
#include<iostream>
using namespace std;
string decimalToBinary(int num){
    string result = "";
    while(num>0){
        if(num%2==0){
            result = "0"+result;

        }
        else {
            result = "1"+result;
        }
         num=num/2;

    }
    return result;

}
int main(){
    int x = 12;
  cout<<decimalToBinary(x)<<"\n";
  return 0;
}
=======
#include<iostream>
using namespace std;
string decimalToBinary(int num){
    string result = "";
    while(num>0){
        if(num%2==0){
            result = "0"+result;

        }
        else {
            result = "1"+result;
        }
         num=num/2;

    }
    return result;

}
int main(){
    int x = 12;
  cout<<decimalToBinary(x)<<"\n";
  return 0;
}
>>>>>>> b218f4bcb23e0b44d0ac0a8c543ca629d035929c
