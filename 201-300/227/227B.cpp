#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    map<ll, ll> ind;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        ind[A[i]] = i;
    }
    ll q;
    cin >> q;
    ll a=0, b=0;
    while(q--){
        ll x;
        cin >> x;
        a += ind[x];
        b += n-ind[x];
    }
    cout << a << " " << b;
    return 0;
}