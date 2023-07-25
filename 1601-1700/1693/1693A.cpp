#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(){
  ll n;
  cin >> n;
  ll arr[n];
  bool check = true, zero = false;
  ll ans = 0;
  for(ll i=0; i<n; i++){
    cin >> arr[i];
  }
  for(ll i=0; i<n; i++){
    ans += arr[i];
    if (arr[i] != 0 and zero) {
      check = false;
      break;
    }
    if (ans < 0) check = false;
    if (ans == 0) zero = true;
  }
  cout << (check and ans == 0 ? "Yes\n" : "No\n");
}

int main(){
  ll t;
  cin >> t;
  while(t--){
  	solve();
  }
  return 0;
}