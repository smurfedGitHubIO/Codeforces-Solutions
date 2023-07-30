#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll A[n][m];
    map<ll, ll> mp;
    ll sm = 0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin >> A[i][j];
            mp[A[i][j]] = 1;
            sm += A[i][j];
        }
    }
    vector<ll> v;
    for(auto x : mp){
        v.emplace_back(x.first);
    }
    if(v.size() == 1){
        cout << 0;
    }else{
        sort(begin(v), end(v));
        ll mn = 1000000000000;
        for(ll i=0; i<v.size(); i++){
            if(i < v.size()-1 and abs(v[i]-v[i+1])%k != 0){
                cout << -1;
                return 0;
            }
            cout << sm << " " << v[i]*n*m << "\n";
            mn = min(mn, abs(sm-n*m*v[i])/k);
        }
        cout << mn;
    }
    return 0;
}