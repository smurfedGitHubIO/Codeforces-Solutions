#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  cin >> n;
  ll A[n];
  ll lcm = 1;
  bool ans = true;
  for(ll i=0; i<n; i++){
    cin >> A[i];
    while(A[i]%3 == 0){
      A[i] /= 3;
    }
    while(A[i]%2 == 0){
      A[i] /= 2;
    }
    if(i == 0){
      lcm = A[i];
    } else {
      if (A[i] != lcm) {
        ans = false;
      }
    }
  }
  cout << (ans ? "Yes" : "No");
  return 0;
}