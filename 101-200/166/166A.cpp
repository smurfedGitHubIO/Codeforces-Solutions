#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll A[n];
    ll cnt = 0;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        if(A[i] <= 5-m){
            cnt++;
        }
    }
    ll ans = cnt/3;
    cout << ans;
    return 0;
}