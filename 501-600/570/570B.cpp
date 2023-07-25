#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  ll a, b;
  cin >> a >> b;
  ll left = b-1, right = b+1;
  if (a == 1) {
    cout << 1;
  } else if(left >= a-b){
    cout << left;
  } else {
    cout << right;
  }
  return 0;
}