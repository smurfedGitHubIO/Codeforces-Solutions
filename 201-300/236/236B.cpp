#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll MOD = 1073741824;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c;
    cin >> a >> b >> c;
    map<ll, ll> A[101];
    A[1][1] = 0;
    for(ll i=2; i<=100; i++){
        ll j = 2;
        ll q = i;
        while(j <= q){
            while(q%j == 0){
                q /= j;
                A[i][j] += 1;
            }
            j ++;
        }
    }
    ll ans = 0;
    for(ll i=1; i<=a; i++){
        for(ll j=1; j<=b; j++){
            for(ll k=1; k<=c; k++){
                map<ll, ll> mp;
                for(auto x : A[i]){
                    mp[x.first] += x.second;
                }
                for(auto x : A[j]){
                    mp[x.first] += x.second;
                }
                for(auto x : A[k]){
                    mp[x.first] += x.second;
                }
                ll q = 1;
                for(auto x : mp){
                    q = (q*(x.second+1))%MOD;
                }
                ans = (ans+q)%MOD;
            }
        }
    }
    cout << ans;
    return 0;
}