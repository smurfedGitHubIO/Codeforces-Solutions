#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, char> pcl;

int main(){
  ll n;
  cin >> n;
  string s;
  cin >> s;
  map<char, ll> mcl;
  vector<pcl> odd;
  vector<pcl> even;
  for(ll i=0; i<n; i++){
    mcl[s[i]] += 1;
  }
  for(auto x : mcl){
    if(x.second&1){
      odd.emplace_back(mp(x.second, x.first));
    } else {
      even.emplace_back(mp(x.second, x.first));
    }
  }
  sort(begin(odd), end(odd));
  sort(begin(even), end(even));
  for(ll i=0; i<min(even.size(), odd.size()); i++){
    ll q = odd[i].f/2, p = even[i].f/2;
    for(ll j=0; j<min(q,p); j++){
      cout << odd[i].s << even[i].s;
    }
    if (q > p) {
      for(ll j=0; j<q-p; j++){
        cout << odd[i].s;
      }
    } else {
      for(ll j=0; j<p-q; j++){
        cout << even[i].s;
      }
    }
    cout << odd[i].s;
    if (q > p) {
      for(ll j=0; j<q-p; j++){
        cout << odd[i].s;
      }
    } else {
      for(ll j=0; j<p-q; j++){
        cout << even[i].s;
      }
    }
    for(ll j=0; j<min(q,p); j++){
      cout << even[i].s << odd[i].s;
    }
  }
  if(even.size() > odd.size()){
    for(ll i=0; i<even.size()-odd.size(); i++){
      for(ll j=0; j<even[i+odd.size()].f/2; j++){
        cout << even[i+odd.size()].s;
      }
    }
    for(ll i=even.size()-odd.size()-1; i>=0; i--){
      for(ll j=0; j<even[i+odd.size()].f/2; j++){
        cout << even[i+odd.size()].s;
      }
    }
  } else {
    for(ll i=0; i<abs(even.size()-odd.size()); i++){
      for(ll j=0; j<odd[i+even.size()].f/2; j++){
        cout << odd[i+even.size()].s;
      }
    }
    cout << odd[even.size()].s;
    for(ll i=abs(even.size()-odd.size()); i>=0; i--){
      for(ll j=0; j<odd[i+even.size()].f/2; j++){
        cout << odd[i+even.size()].s;
      }
    }
    for(ll i=1; i<abs(even.size()-odd.size()); i++){
      cout << odd[i+even.size()].s;
    }
  }
  return 0;
}