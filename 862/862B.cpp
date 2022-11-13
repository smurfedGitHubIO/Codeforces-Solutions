#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  vector<ll> cont[n+1];
  vector<ll> cnt(n+1, 0);
  for(ll i=0; i<n-1; i++){
    ll x, y;
    cin >> x >> y;
    cont[x].emplace_back(y);
    cont[y].emplace_back(x);
    cnt[x] += 1;
    cnt[y] += 1;
  }
  vector<ll> a;
  vector<ll> b;
  vector<ll> color(n+1, -1);
  color[1] = 0;
  queue<ll> ql;
  ql.push(1);
  vector<bool> vis(n+1, false);
  b.emplace_back(1);
  while(!ql.empty()){
    ll fr = ql.front();
    ql.pop();
    vis[fr] = 1;
    for(ll i=0; i<cont[fr].size(); i++){
      if(!vis[cont[fr][i]]){
        ql.push(cont[fr][i]);
        color[cont[fr][i]] = (color[fr]+1)%2;
        if(color[cont[fr][i]] == 1){
          a.emplace_back(cont[fr][i]);
        } else {
          b.emplace_back(cont[fr][i]);
        }
      }
    }
  }
  ll ans = 0;
  for(ll i=0; i<a.size(); i++){
    ans += b.size()-cnt[a[i]];
  }
  cout << ans;
}