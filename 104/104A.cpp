#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll ans[16];
    for(ll i=0; i<=15; i++){
        ans[i] = 0;
    }
    for(ll i=1; i<=52; i++){
        if(i%13 == 1){
            ans[1] ++;
            ans[11] ++;
        } else if(i==12) {
            continue;
        } else {
            if(i%13 == 0 or i%13 >= 10){
                ans[10] ++;
            } else {
                ans[i%13] ++;
            }
        }
    }
    cout << ans[n-10];
    return 0;
}