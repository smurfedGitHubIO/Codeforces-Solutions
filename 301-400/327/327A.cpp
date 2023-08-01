#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    ll ans[n+1];
    ans[0] = 0;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        ans[i+1] = ans[i]+A[i];
    }
    ll mx = 0;
    for(ll i=0; i<=n; i++){
        for(ll j=i+1; j<=n; j++){
            mx = max(mx, ans[i]+((j-i)-(ans[j]-ans[i])+ans[n]-ans[j]));
            // cout << mx << " " << ans[i] << " " << ans[j] << " " << ans[n] << "\n";
        }
    }
    cout << mx;
    return 0;
}