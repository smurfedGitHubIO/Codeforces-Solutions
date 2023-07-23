#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll x, cur = 0;
    for(ll i=0; i<n; i++){
        cin >> x;
        cur += x;
    }
    ll ans = 0;
    for(ll i=1; i<=5; i++){
        if((cur+i)%(n+1) != 1)
            ans++;
    }
    cout << ans;
    return 0;
}