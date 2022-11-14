#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, m;
  cin >> n >> m;
  if (m == 0){
    cout << n << " " << n;
    return 0;
  }
  if(n-m*2 > 0){
    cout << n-m*2 << " ";
  } else {
    cout << "0 ";
  }
  ll q = sqrt(2*m)+1;
  if((q*(q-1))/2 < m){
    q ++;
  }
  if(n-q > 0){
    cout << n-q;
  } else {
    cout << "0";
  }
  return 0;
}