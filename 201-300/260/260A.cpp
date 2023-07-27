#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll a, b, n;
    cin >> a >> b >> n;
    ll q = 1;
    for(ll i=1; i<=min(n,10); i++){
        ll mod = (a*q)%b, div = (a*q)/b;
        if(q < mod){
            cout << -1;
            return 0;
        }
    }
    ll mod = (a*q)%b, div = (a*q)/b;
    if(q < mod){
        cout << -1;
    } else {
        cout << (b*(div+1));
        for(ll i=0; i<max(0, n-10); i++){
            cout << 0;
        }
    }
    return 0;
}