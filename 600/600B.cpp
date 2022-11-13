#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  vector<ll> A(n, -1);
  ll B[m];
  for(ll i=0; i<n; i++){
    cin >> A[i];
  }
  sort(begin(A), end(A));
  for(ll j=0; j<m; j++){
    cin >> B[j];
    ll start = 0, end = n-1;
    ll q = -1;
    while(start <= end){
      ll md = start + ((end-start)>>1);
      if (A[md] <= B[j]) {
        start = md + 1;
        q = md;
      } else {
        end = md - 1;
      }
    }
    cout << q + 1 << " ";
  }
  return 0;
}