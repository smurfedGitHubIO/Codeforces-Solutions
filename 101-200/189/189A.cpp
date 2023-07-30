#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll p = n/a, q = n/b, r = n/c;
    ll mx = 0;
    for(ll i=0; i<=p+1; i++){
        for(ll j=0; j<=q+1; j++){
            for(ll k=0; k<=r+1; k++){
                if(a*i+b*j+c*k == n){
                    mx = max(mx, i+j+k);
                }else if(a*i+b*j+c*k > n){
                    break;
                }
            }
        }
    }
    cout << mx;
    return 0;
}