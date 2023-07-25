#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;

int main(){
  ll n, m, k;
  cin >> n >> m >> k;
  vector< pair<ll,ll> > A[n];
  for(ll i=0; i<m; i++){
    ll a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    A[a].emplace_back(mp(b, c));
    A[b].emplace_back(mp(a, c));
  }
  vector<bool> B(n, false);
  ll cont[k];
  for(ll i=0; i<k; i++){
    cin >> cont[i];
    --cont[i];
    B[cont[i]] = true;
  }
  ll ans = -1;
  for(ll i=0; i<k; i++){
    for(ll j=0; j<A[cont[i]].size(); j++){
      if(!B[A[cont[i]][j].f]){
        ans = (ans == -1 ? A[cont[i]][j].s : min(ans, A[cont[i]][j].s));
      }
    }
  }
  cout << ans;
  return 0;
}