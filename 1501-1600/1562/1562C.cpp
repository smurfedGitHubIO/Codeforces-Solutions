#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll numzeroes = 0, lastzero = 0, firstone = -1;
    for(ll i=0; i<n; i++){
        if(s[i] == '0'){
            numzeroes += 1;
            lastzero = i;
        }
        else if(firstone == -1){
            firstone = i;
        }
    }
    if(numzeroes == 0){
        cout << 1 << " " << n-(n&1) << " " << 1 << " " << n/2 << "\n";
    }
    else if(lastzero <= n/2 - 1){
        cout << lastzero+1 << " " << n << " " << lastzero+2 << " " << n << "\n";
    }
    else{
        cout << 1 << " " << lastzero+1 << " " << 1 << " " << lastzero << "\n";
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}