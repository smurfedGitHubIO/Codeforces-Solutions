#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

double choose(ll n, ll m){
  double ans = 1;
  for(double i=0; i<min(n-m, m); i++){
    ans = ans*(n-i)/(i+1);
  }
  return ans;
}

int main(){
  string s;
  string t;
  cin >> s >> t;
  vector<ll> A(3, 0);
  vector<ll> B(3, 0);
  ll n = s.length();
  for(ll i=0; i<n; i++){
    if(s[i] == '+'){
      A[0] += 1;
    } else if(s[i] == '-'){
      A[1] += 1;
    } else {
      A[2] += 1;
    }
  }
  for(ll i=0; i<n; i++){
    if(t[i] == '+'){
      B[0] += 1;
    } else if(t[i] == '-'){
      B[1] += 1;
    } else {
      B[2] += 1;
    }
  }
  ll q = max(0LL, A[0]-B[0]) + max(0LL, A[1]-B[1]);
  if (q > B[2]) {
    cout << "0.000000000000000";
  } else {
    double q = choose(B[2], max(max(0LL, A[0]-B[0]), max(0LL, A[1]-B[1])));
    double p = (1<<B[2]);
    cout << fixed << setprecision(9) << q/p;
  }
  return 0;
}