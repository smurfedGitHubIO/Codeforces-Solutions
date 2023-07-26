#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    ll ans = 0;
    for(ll i=0; i<n; i++){
        cin >> A[i];
    }
    sort(A, A+n);
    for(ll i=0; i<n; i++){
        ans += abs(A[i]-(i+1));
    }
    cout << ans;
    return 0;
}