#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        ans += x;
    }
    cout << fixed << setprecision(8) << (ans*100.0)/(100.0*n);
    return 0;
}