#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> pl;

int main(){
  ll n, m;
  cin >> n >> m;
  vector<pl> vp;
  vector<ll> ans(n+1, -1);
  ll x, y;
  for(ll i=0; i<m; i++){
    cin >> x >> y;
    vp.emplace_back(mp(y-x+1, mp(x,y)));
  }
  sort(begin(vp), end(vp));
  for(ll i=0; i<vp.size(); i++){
    pl tp = vp[i];
    ll half = (tp.f>>1) + (tp.f&1);
    ll ones = 0, zeroes = 0;
    for(ll j=tp.s.f; j<=tp.s.s; j++){
      ones += (ans[j] == 1);
      zeroes += (ans[j] == 0);
    }
    for(ll j=tp.s.f; j<=tp.s.s; j++){
      if(ans[j] == -1){
        if(ones != 0){
          ans[j] = 1;
          ones -= 1;
        } else {
          ans[j] = 0;
          zeroes -= 1;
        }
      }
    }
  }
  for(ll i=1; i<=n; i++){
    ans[i] = (ans[i] == -1 ? 1 : ans[i]);
  }
  for(ll i=1; i<=n; i++){
    cout << ans[i];
  }
  return 0;
}