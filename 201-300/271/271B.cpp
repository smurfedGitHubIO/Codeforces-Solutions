#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 1e5 + 11;

vector<bool> isP(MAXN, true);
vector<ll> primes;

void init(){
  isP[0] = isP[1] = false;
  for(ll i=2; i<MAXN; i++){
    if(isP[i]){
      primes.emplace_back(i);
    }
    for(ll j=0; j<primes.size() and primes[j]*i<MAXN; j++){
      isP[primes[j]*i] = false;
    }
  }
}

int main(){
  init();
  ll n, m;
  cin >> n >> m;
  ll A[n][m];
  vector<ll> rows(n, 0);
  vector<ll> cols(m, 0);
  for(ll i=0; i<n; i++){
    for(ll j=0; j<m; j++){
      cin >> A[i][j];
      if(!isP[A[i][j]]) {
        vector<ll>::iterator iter = lower_bound(begin(primes), end(primes), A[i][j]);
        vector<ll>::iterator iter2 = upper_bound(begin(primes), end(primes), A[i][j]);
        ll q = 0;
        if(primes[iter-begin(primes)] > A[i][j]){
          q = primes[iter-begin(primes)]-A[i][j];
        }
        if(primes[iter2-begin(primes)] > A[i][j]){
          q = min(primes[iter2-begin(primes)]-A[i][j], q);
        }
        rows[i] += q;
        cols[j] += q;
      }
    }
  }
  ll mn = 1e18 + 11;
  for(ll i=0; i<n; i++){
    mn = min(rows[i], mn);
  }
  for(ll j=0; j<m; j++){
    mn = min(cols[j], mn);
  }
  cout << mn;
  return 0;
}