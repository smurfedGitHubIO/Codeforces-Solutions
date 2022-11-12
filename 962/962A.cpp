#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll q = 0;
  ll A[n];
  ll ans = 0, p = 0;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    q += A[i];
  }
  for(ll i=0; i<n; i++){
    p += A[i];
    if(p >= (q>>1) + (q&1)) {
      cout << i+1;
      break;
    }
  }
  return 0;
}