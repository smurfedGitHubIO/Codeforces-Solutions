#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    if(n&1){
        cout << -1;
    } else {
        for(ll i=1; i<=n; i+=2){
            cout << i+1 << " " << i << " ";
        }
    }
    return 0;
}