#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll func(ll x){
    return (x*(x-1))/2;
}

int main(){
    ll n;
    cin >> n;
    for(ll i=1; i<=n+n-1; i++){
        ll width = n+n-1+n+n-2;
        if(i<=n+1){
            for(ll j=0; j<func(n-i-1); j++){
                cout << " ";
            }
            for(ll j=0; j<i; j++){
                cout << j << " ";
            }
            for(ll j=i-1; j>=0; j--){
                cout << j << " ";
            }
        } else {

        }
    }
    return 0;
}