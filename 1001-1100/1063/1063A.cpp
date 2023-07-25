#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, char> plc;

int main(){
  ll n;
  string s;
  cin >> n >> s;
  map<char, ll> mcl;
  for(ll i=0; i<n; i++){
    mcl[s[i]] += 1;
  }
  vector<plc> odd;
  vector<plc> even;
  for(auto x : mcl){
    if(x.s&1){
      odd.emplace_back(mp(x.s, x.f));
    } else {
      even.emplace_back(mp(x.s, x.f));
    }
  }
  sort(begin(odd), end(odd));
  sort(begin(even), end(even));
  ll mn = min(odd.size(), even.size());
  for(ll i=0; i<mn; i++){
    ll q = (odd[i].f)/2;
    ll p = (even[i].f)/2;
    for(ll j=0; j<min(p, q); j++){
      cout << odd[i].s << even[i].s;
    }
    if(q > p){
      for(ll j=0; j<q-p; j++)
        cout << odd[i].s;
    } else {
      for(ll j=0; j<p-q; j++)
        cout << even[i].s;
    }
    cout << odd[i].s;
    if(q > p){
      for(ll j=0; j<q-p; j++)
        cout << odd[i].s;
    } else {
      for(ll j=0; j<p-q; j++)
        cout << even[i].s;
    }
    for(ll j=0; j<min(p, q); j++){
      cout << even[i].s << odd[i].s;
    }
  }
  
  return 0;
}