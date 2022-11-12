#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  map<ll, ll> cnt;
  map<ll, pair<ll, ll> > mpl;
  ll mx = 0;
  ll mx2 = 1e18+11, ans = 0;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    cnt[A[i]] += 1;
    if(cnt[A[i]] == 1){
      mpl[A[i]] = mp(i, i);
    } else {
      mpl[A[i]].s = i;
    }
    mx = max(mx, cnt[A[i]]);
  }
  for(auto x : cnt){
    if(mx == x.second){
      if(mx2 > mpl[x.first].s - mpl[x.first].f){
        mx2 = mpl[x.first].s - mpl[x.first].f;
        ans = x.first;
      }
    }
  }
  cout << mpl[ans].f+1 << " " << mpl[ans].s+1;
  return 0;
}