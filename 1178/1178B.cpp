#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<char, ll> pcl;

int main(){
  string s;
  cin >> s;
  ll n = s.length();
  vector<pcl> v;
  ll cur = 0;
  char last = 'a';
  for(ll i=0; i<n; i++){
    if(i == 0){
      last = s[i];
    } else {
      if(last == s[i]){
        cur += 1;
      } else {
        if((cur > 0 and last == 'v') or (cur >= 0 and last == 'o')){
          v.emplace_back(mp(last, cur + (last == 'o')));
        }
        last = s[i];
        cur = 0;
      }
    }
  }
  if(cur > 0)
    v.emplace_back(mp(last, cur));
  for(ll i=0; i<v.size(); i++){
    cout << v[i].f << " " << v[i].s << "\n";
  }
  ll ans = 0;
  for(ll i=0; i<v.size(); i++){
    if(v[i].f == 'v'){
      for(ll j=i+1; j<v.size(); j++){
        if(v[j].f == 'o'){
          for(ll k=i+2; k<v.size(); k++){
            if(v[k].f == 'v'){
              ans += v[i].s*v[j].s*v[k].s;
            }
          }
        }
      }
    }
  }
  cout << ans;
  return 0;
}