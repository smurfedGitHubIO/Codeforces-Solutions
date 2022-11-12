#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  map<ll, ll> cnt;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    cnt[A[i]] += 1;
  }
  vector<ll> v;
  for(auto x : cnt){
    v.emplace_back(x.second);
  }
  ll ans = 0;
  for(ll i=1; i<v.size(); i++){
    ans += min(v[i-1], v[i]);
  }
  cout << ans;
  return 0;
}