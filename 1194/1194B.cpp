#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll INF = 1e18 + 11;

int main(){
  ll q;
  cin >> q;
  while(q--){
    ll n, m;
    cin >> n >> m;
    string s[n];
    vector<ll> row(n, 0);
    vector<ll> col(m, 0);
    ll mc = INF, mr = INF;
    for(ll i=0; i<n; i++){
      cin >> s[i];
      for(ll j=0; j<m; j++){
        if(s[i][j] == '.') {
          row[i] += 1;
          col[j] += 1;
        }
      }
    }
    for(ll i=0; i<n; i++){
      mr = min(mr, row[i]);
    }
    for(ll i=0; i<m; i++){
      mc = min(mc, col[i]);
    }
  }
  return 0;
}