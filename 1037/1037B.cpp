#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  ll A[n];
  for(ll i=0; i<n; i++){
    cin >> A[i];
  }
  sort(A, A+n);
  ll ans = 0;
  if (A[(n>>1)] > m){
    for(ll i=(n>>1); i>=0; i--){
      if(A[i] <= m){
        break;
      }
      ans += A[i]-m;
    }
  } else {
    for(ll i=(n>>1); i<n; i++){
      if(A[i] >= m){
        break;
      }
      ans += m-A[i];
    }
  }
  cout << ans;
  return 0;
}