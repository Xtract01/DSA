<<<<<<< HEAD
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int p = -1;
    int ans[n-k+1];
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1) ans[0]=1;
    else ans[0] = ans[p];
    int i =1;
    int j = k;
    while(j<n){
        if(p>=i) ans[i] = arr[p];
        else{
            for(int x=i;x<=j;x++){
                if(arr[x]<0){
                    p=x;
                    break;
                }
            }
            if(p!=-1) ans[i]= arr[p];
            else ans[i]=1;
        }
        i++;
        j++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i];
    }
=======
#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int p = -1;
    int ans[n-k+1];
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1) ans[0]=1;
    else ans[0] = ans[p];
    int i =1;
    int j = k;
    while(j<n){
        if(p>=i) ans[i] = arr[p];
        else{
            for(int x=i;x<=j;x++){
                if(arr[x]<0){
                    p=x;
                    break;
                }
            }
            if(p!=-1) ans[i]= arr[p];
            else ans[i]=1;
        }
        i++;
        j++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i];
    }
>>>>>>> b218f4bcb23e0b44d0ac0a8c543ca629d035929c
}