#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> vl;
    vl.emplace_back(2);
    vl.emplace_back(3);
    vl.emplace_back(5);
    vl.emplace_back(7);
    ll ans = 0;
    for(ll i=1; i< (1<<4); i++){
        ll q = 1, cur = 0;
        for(ll j=0; j<4; j++){
            if(i&(1<<j)){
                cur++;
                q*=vl[j];
            }
        }
        ans += (cur&1 ? 1 : -1)*(n/q);
    }
    cout << n-ans;
    return 0;
}