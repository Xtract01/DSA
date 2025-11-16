#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> st;
int getMax(int i , int lo , int hi, int &l, int &r){
    if( r<lo||l>hi ) return INT_MIN;
    if(l<=lo && r>=hi) return st[i];
    int mid = lo+(hi-lo)/2;
    int leftMax = getMax(2*i+1,lo,mid,l,r);
    int rightMax = getMax(2*i+2,mid+1,hi,l,r);
    return max(leftMax,rightMax);
}
void buildTree(int arr[],int i , int lo , int hi){
    int mid = lo+(hi-lo)/2;
    if(lo == hi){
        st[i] = arr[lo];
        return;
    }
    buildTree(arr,2*i+1,lo,mid);//left subtree
    buildTree(arr,2*i+2,mid+1,hi);//right subtree
    st[i] = max(st[2*i+1],st[2*i+2]); //max of left and right subtree
}
int main(){
    int arr[] = {1,4,2,8,6,4,9,3}; //0 - 7
    int n = sizeof(arr) / sizeof(arr[0]);
    st.resize(4*n);
    buildTree(arr,0,0,n-1);
    int l,r;
    cout<<endl<<"Enter the range to find max: ";
    cin>>l>>r;
    cout<<getMax(0,0,n-1,l,r)<<endl;
}