#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll mx = 0;
    ll x, y, cur = 0;
    for(ll i=0; i<n; i++){
        cin >> x >> y;
        cur -= x;
        cur += y;
        mx = max(mx, cur);
    }
    cout << mx;
    return 0;
}