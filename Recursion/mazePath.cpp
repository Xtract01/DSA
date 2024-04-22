#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec ) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc ,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}

//in 2 variables
int maze2(int row , int column){
    if(row<1 || column<1) return 0;
    if(row==1 && column==1 ) return 1;
    int rightWays = maze2(row,column-1);
    int downWays = maze2(row-1,column);
    int totalWays = rightWays + downWays;
    return totalWays;
}

void printMaze(int sr,int sc,int er,int ec,string S){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec ){
        cout<<S<<endl;
        return;
    } ;
    printMaze(sr,sc+1,er,ec,S+'R');
    printMaze(sr+1,sc ,er,ec,S+'D');
}
int main(){
    int sr,sc,er,ec;
    cout<<"Enter staring row ";
    cin>>sr;
    cout<<"Enter staring column ";
    cin>>sc;
    cout<<"Enter ending row ";
    cin>>er;
    cout<<"Enter ending column ";
    cin>>ec;
    cout<<maze(sr,sc,er,ec)<<endl;
    printMaze(sr,sc,er,ec,"");
}