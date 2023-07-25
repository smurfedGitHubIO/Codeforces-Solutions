#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> pl;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  for(ll i=0; i<n; i++){
    cin >> A[i];
  }
  ll ans = 0, cur = 0;
  ll last;
  bool used = false;
  ll mn;
  for(ll i=0; i<n; i++){
    if(i == 0){
      cur += 1;
      mn = i;
      last = A[i];
    } else if (last < A[i]){
      cur += 1;
      last = A[i];
    } else if (A[i] <= last and !used) {
      last = last+1;
      cur += 1;
      used = 1;
      mn = i;
    } else {
      ans = max(ans, cur);
      cur = 1;
      last = A[mn];
      i = mn;
      used = false;
    }
  }
  ans = max(ans, cur);
  cur = 0;
  used = false;
  for(ll i=n-1; i>=0; i--){
    if(i == n-1){
      cur += 1;
      mn = i;
      last = A[i];
    } else if (last > A[i]){
      cur += 1;
      last = A[i];
    } else if (A[i] >= last and !used) {
      last = last-1;
      cur += 1;
      used = 1;
      mn = i;
    } else {
      ans = max(ans, cur);
      cur = 1;
      last = A[mn];
      i = mn;
      used = false;
    }
  }
  cout << max(ans, cur);
  return 0;
}