#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    ll A[n];
    map<ll, ll> check;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        ans+=A[i];
    }
    ll q = abs(ans/m) + (ans%m != 0);
    cout << q;
    return 0;
}