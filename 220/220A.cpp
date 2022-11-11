#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  ll B[n];
  for(ll i=0; i<n; i++){
    cin >> A[i];
    B[i] = A[i];
  }
  sort(B, B+n);
  ll ans = 0;
  for(ll i=0; i<n; i++){
    ans += (B[i] != A[i]);
  }
  cout << (ans <= 2 ? "YES" : "NO");
  return 0;
}