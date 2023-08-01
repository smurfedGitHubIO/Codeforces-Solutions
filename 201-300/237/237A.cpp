#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll x, y;
    ll lx = -1, ly = -1;
    ll cur = 1, mx = 1;
    for(ll i=0; i<n; i++){
        cin >> x >> y;
        if(i == 0){
            lx = x, ly = y;
        }else if(lx == x and ly == y){
            cur++;
            mx = max(mx, cur);
        }else{
            cur = 1;
            lx = x, ly = y;
        }
    }
    cout << mx;
    return 0;
}