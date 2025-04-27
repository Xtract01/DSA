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
