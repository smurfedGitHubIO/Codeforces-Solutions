#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

void solve(){
    ll n;
    cin >> n;
    string s[2];
    for(ll i=0; i<2; i++){
        cin >> s[i];
    }
    ll li = 0, lj = 0;
    bool ans = true;
    while(lj < n){
        if(s[li][lj] == '1' or s[li][lj] == '2'){
            lj++;
            if(!(s[li][lj] == '1' or s[li][lj] == '2')){
                if(li == 0){
                    s[li][lj] = '4';
                }
                else{
                    s[li][lj] = '5';
                }
            }
        }
        else{
            if(li == 1){
                li--;
                if(s[li][lj] == '1' or s[li][lj] == '2'){
                    ans = false;
                    break;
                }
                else{
                    s[li][lj] = '3';
                    lj++;
                }
            }
            else{
                li++;
                if(s[li][lj] == '1' or s[li][lj] == '2'){
                    ans = false;
                    break;
                }
                else{
                    s[li][lj] = '6';
                    lj++;
                }
            }
        }
    }
    cout << (ans and li == 1 and lj == n ? "YES\n" : "NO\n");
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}