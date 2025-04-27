#include <iostream> 
using namespace std;
#define ll long long
#define endl '\n'
#include <set>
void solve(){
    ll n,k,d;
    cin>>n>>k>>d;
    multiset<ll> t;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        t.insert(x);
    }
    multiset<pair<ll,ll>>q;
    ll cnt = 0;
    for(int i=0;i<d;i++){
        while(q.size() && q.begin()->first == i){
            t.insert(q.begin()-> second);
            q.erase(q.begin());
        }
        while(t.size()>k){
            cnt++;
            q.insert(mp())
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
	    int n,k,d;
        cin>>n>>k>>d;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==k){
            cout<<0<<endl;
            continue;
        }
    }
    
    return 0;
}