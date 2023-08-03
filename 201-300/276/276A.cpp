#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll mx = -1000000000000000;
    for(ll i=0; i<n; i++){
        ll x, y;
        cin >> x >> y;
        if(y > m){
            mx = max(mx, x-(y-m));
        }else{
            mx = max(mx, x);
        }
    }
    cout << mx;
    return 0;
}