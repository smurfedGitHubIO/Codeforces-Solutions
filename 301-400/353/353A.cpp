#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll both = 0, one = 0;
    for(ll i=0; i<n; i++){
        ll x, y;
        cin >> x >> y;
        if(x&1 and y&1){
            both += 1;
        }else if(!(x%2 == 0 and y%2 == 0)){
            one += 1;
        }
    }
    return 0;
}