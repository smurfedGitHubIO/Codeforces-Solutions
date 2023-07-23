#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    ll ans = 0;
    for(ll i=1; i<=d; i++){
        if(i%k == 0 or i%l == 0 or i%m == 0 or i%n == 0)
            ans++;
    }
    cout << ans;
    return 0;
}