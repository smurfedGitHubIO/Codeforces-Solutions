#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll A[n];
    map<ll, ll> mp;
    ll cnt = 0;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        mp[A[i]] += 1;
        if(mp[A[i]] == 1){
            cnt++;
        }
    }
    ll cur = A[m-1];
    for(ll i=n-1; i>=m-1; i--){
        if(A[i] != cur){
            cout << -1;
            return 0;
        }
    }
    for(ll i=m-2; i>=0; i--){
        if(A[i] != cur){
            cout << i+1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}