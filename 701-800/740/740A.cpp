#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll n, a, b , c;
  cin >> n >> a >> b >> c;
  if(n%4 == 0){
    cout << 0;
  } else {
    cout << ((4-n%4 == 1) ? min({a, 3*c, 3*(b+a), b+c}) : ((4-n%4 == 2 ? min({2*a, b, 2*c, 2*(b+a)}) : min({3*a, b+a, c}))));
  }
  return 0;
}