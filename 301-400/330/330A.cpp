#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    char s[n][m];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin >> s[i][j];
        }
    }
    vector<bool> rows(n, true);
    vector<bool> cols(m, true);
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(s[i][j] == 'S'){
                rows[i] = false;
                cols[j] = false;
            }
        }
    }
    ll ans = 0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(s[i][j] == '.' and (rows[i] or cols[i])){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}