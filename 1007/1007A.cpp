#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  for(ll i=0; i<n; i++){
    cin >> A[i];
  }
  sort(A, A+n);
  ll ans = 0;
  ll ind = 0;
  for(ll i=0; i<n and ind < n; i++){
    while(A[ind] == A[i] and ind < n){
      ind += 1;
    }
    ans += (ind < n ? A[ind] != A[i] : A[ind-1] != A[i]);
    ind += 1;
  }
  cout << ans;
  return 0;
}