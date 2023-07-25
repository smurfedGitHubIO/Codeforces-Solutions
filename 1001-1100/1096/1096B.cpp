#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MOD = 998244353;

int main(){
  ll n = 200000;
  string s="";
  for(ll i=0; i<n; i++){
    s += "a";
  }
  // cin >> n >> s;
  ll ans = 1;
  ll left = 1, right = 1;
  for(ll i=n-1; i>0; i--){
    if(s[i] != s[i-1]){
      break;
    }
    left += 1;
  }
  for(ll i=0; i<n-1; i++){
    if(s[i] != s[i+1]){
      break;
    }
    right += 1;
  }
  if(s[0] == s[n-1]){
    if(left == n){
      ans += ((left-1)*(right-1))%MOD + (left + right-2)%MOD;
    } else {
      ans += ((left)*(right))%MOD + (left + right)%MOD;
    }
  } else {
    ans = (ans+left+right)%MOD;
  }
  cout << ans%MOD;
  return 0;
}