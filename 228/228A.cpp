#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    map<ll, ll> mpl;
    ll A[4];
    ll ans = 0;
    for(ll i=0; i<4; i++){
        cin >> A[i];
        ans += (mpl[A[i]] != 0);
        mpl[A[i]] = 1;
    }
    cout << ans;
    return 0;
}