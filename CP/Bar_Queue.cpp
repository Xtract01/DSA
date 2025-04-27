#include <iostream> 
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
	    string s ;
        cin>>s;
        int bcount=0;
        int gcount=0;
        for(int i =0 ;i<n;i++){
            if(s[i]=='B'){
                bcount++;
            }
            else if(s[i]=='G'){
                gcount++;
            }
            if(bcount>0 && bcount>2*gcount){
                break;
            }
            
        }
        cout<< bcount+gcount<<endl;
    }
    return 0;
}