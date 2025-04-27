#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the total number of rows of first matrix";
    cin>>m;
    int n;
    cout<<"Enter the total number of columns of first matrix ";
    cin>>n;
    int p;
    cout<<"Enter the total number of rows of second matrix";
    cin>>p;
    int q;
    cout<<"Enter the total number of columns of second matrix ";
    cin>>q;
    if(n==p){
        int arr[m][n];
        int brr[p][q];
        cout<<"Enter elements of first matrix ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
         cout<<"Enter elements of second matrix ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>brr[i][j];
            }
        }
        //Resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j] += arr[i][k]*brr[k][j];
                }


            }
        }
        //Print
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"Matrics can not be multiplied ";
}    
