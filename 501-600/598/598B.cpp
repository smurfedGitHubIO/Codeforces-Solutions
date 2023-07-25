#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  string s;
  cin >> s;
  ll q;
  cin >> q;
  while(q--){
    ll l, r, k;
    cin >> l >> r >> k;
    --l, --r;
    string t = s;
    for(ll i=l; i<=r; i++){
      // cout << (i+k-l)%(r-l+1) << "\n";
      t[(i+k-l)%(r-l+1)+l] = s[i];
    }
    s = t;
  }
  cout << s;
  return 0;
}