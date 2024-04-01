#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total number of Students ";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks ";
    
    //Taking input
    for(int i=0; i<=n-1; i++){
        cin>>marks[i];
    }

    //Printing rollno.[rollno. = index] of students whose marks are less than 35
    for(int i=0; i<=n-1; i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}