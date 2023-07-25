#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n,m;
  cin >> n >> m;
  string s;
  cin >> s;
  ll mx = 0;
  for(ll i=1; i<s.length(); i++){
    bool check = true;
    ll j =0;
    for(; j<i; j++){
      if(s[j] != s[s.length()-i+j]){
        check = false;
      }
    }
    if(check){
      mx = max(mx, j);
    }
  }
  ll q = 0;
  while(q != m){
    if (q == m-1){
      for(ll i=0; i<s.length(); i++){
        cout << s[i];
      }
    } else {
      for(ll i=0; i<s.length()-mx; i++){
        cout << s[i];
      }
    }
    q++;
  }
  return 0;
}