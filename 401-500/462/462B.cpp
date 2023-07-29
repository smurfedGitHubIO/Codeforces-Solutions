#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    map<char, ll> mcl;
    char c;
    for(ll i=0; i<n; i++){
        cin >> c;
        mcl[c] += 1;
    }
    vector<pair<ll, ll>> vp;
    for(auto x : mcl){
        vp.emplace_back(make_pair(x.second, x.first));
    }
    sort(begin(vp), end(vp), greater<>());
    ll ans = 0;
    for(auto x : vp){
        if(n == 0) break;
        ans += min(n, x.second);
        n -= min(n, x.second);
    }
    cout << ans;
    return 0;
}