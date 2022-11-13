#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MOD = 40000;

int main(){
  ll n;
  cin >> n;
  ll q = 0;
  bool check = true;
  while(n--){
    string s;
    ll x;
    cin >> x >> s;
    if (q == 20000 and s != "North") {
      check = false;
    } if (q == 0 and s != "South") {
      check = false;
    } if (q-x < 0 and s == "North") {
      check = false;
    } if (q+x > 20000 and s=="South") {
      check = false;
    }
    if(s == "North"){
      q -= x;
    } else if(s == "South"){
      q += x;
    }
    q = (q+MOD)%MOD;
  }
  cout << (q == 0 and check ? "YES" : "NO");
  return 0;
}