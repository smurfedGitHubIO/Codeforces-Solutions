#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n;
  string s;
  cin >> n >> s;
  ll A[10];
  for(ll i=1; i<=9; i++){
    cin >> A[i];
  }
  ll q = 0;
  for(ll i=0; i<n; i++){
    if(q > 0 and A[s[i]-'0'] >= s[i]-'0'){
      cout << A[s[i]-'0'];
      q += 1;
    } else if(q == 0 and A[(s[i]-'0')] > (s[i]-'0')){
      cout << A[(s[i]-'0')];
      q += 1;
    } else {
      cout << s[i];
      if (q > 0){
        q = -1;
      }
    }
  }
  return 0;
}