#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  ll ans = 0;
  ll q = 0;
  while(1){
    if((1LL<<q) > n){
      break;
    }
    q ++;
  }
  q--;
  if(m == 1){
    cout << n;
  } else {
    cout << ((1LL<<q)^((1LL<<q)-1)); 
  }
  return 0;
}