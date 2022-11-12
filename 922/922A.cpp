#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll x, y;
  cin >> x >> y;
  ll b = x-(y-1);
  if (y < 1 or b < 0 or (x > 0 and y-1 == 0) or b&1) {
    cout << "No";
  } else {
    cout << "Yes";
  }
  return 0;
}