#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll q = 1;
  bool check = false;
  ll ans = 1;
  ll x;
  vector<ll> v;
  for(ll i=0; i<n; i++){
    cin >> x;
    if(x == 1){
      if (check) {
        v.emplace_back(q);
        q = 1;
      }
      check = true;
    } else if (check and !x) {
      q += 1;
    }
  }
  for(ll i=0; i<v.size(); i++){
    ans *= v[i];
  }
  cout << (check ? ans : 0);
  return 0;
}