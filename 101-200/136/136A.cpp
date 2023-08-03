#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    map<ll, ll> m;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        m[A[i]] = i+1;
    }
    for(ll i=0; i<n; i++){
        cout << m[A[i]+1] << " ";
    }
    return 0;
}