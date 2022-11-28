#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  ll A[3] = {-1, -1, -1};
  A[0] = n;
  for(ll j=1; j<=3; j++){
    if(A[1] != -1) break;
    for(ll i=2; i*i <= n+j; i++){
      if((n+j)%i == 0 and A[1] == -1){
        A[1] = j;
        break;
      }
    }
  }
  if (A[1] == 2) {
    A[2] = 2;
  }
  for(ll j=1; ; j++){
    if(A[2] != -1) break;
    for(ll i=2; i*i <= n+(2*j+1); i++){
      if((n+2*j+1)%i == 0){
        A[2] = 2*j+1;
        break;
      }
    }
  }
  cout << (m == 1 ? n : (m == 2 ? A[1] : A[2]));
  return 0;
}