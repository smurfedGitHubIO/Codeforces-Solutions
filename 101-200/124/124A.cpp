#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, a, b, ans=0;
    cin >> n >> a >> b;
    for(ll i=1; i<=n; i++){
        if(i-1 >= a and n-i <= b){
            ans++;
        }
    }
    cout << ans;
}