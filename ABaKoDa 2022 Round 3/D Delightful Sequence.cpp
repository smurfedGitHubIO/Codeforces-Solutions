#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n,m;
  cin >> n >> m;
  vector<ll> v;
  while(1){
    v.emplace_back(n);
    ll q = sqrt(n);
    if(n == 1 and q == 1){
      break;
    }
    if(q*q == n){
      q -= 1;
    }
    n = q;
  }
  if(m > v.size()){
    cout << -1;
  } else {
    cout << v[m-1];
  }
  return 0;
}