#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll xs[] = {1,1,0,0};
ll ys[] = {1,0,1,0};

int main(){
    ll n;
    cin >> n;
    ll ans[4] = {0,0,0,0};
    ll x, y;
    for(ll i=0; i<n; i++){
        cin >> x >> y;
        for(ll j=0; j<4; j++){
            ans[j] += (x != xs[j]) + (y != ys[j]);
        }
    }
    cout << min(ans[0], ans[1], ans[2], ans[3]);
    return 0;
}