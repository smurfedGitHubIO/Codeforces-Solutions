#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll x, ans = 0, mx = 0, mn =100000000000;
    for(ll i=0; i<n; i++){
        cin >> x;
        if(i != 0){
            if(mx < x){
                ans++;
                mx = x;
            } else if(mn > x){
                ans++;
                ans++;
            }
        } else {
            mx = mn = x;
        }
    }
    cout << ans;
    return 0;
}