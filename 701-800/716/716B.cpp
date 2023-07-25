#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
  string s;
  cin >> s;
  map<char, ll> mci;
  ll cur = 0, marks = 0;
  for(ll i=0; i<min(26LL, (ll)s.length()); i++){
    if(s[i] != '?'){
      mci[s[i]] += 1;
      if(mci[s[i]] == 1){
        cur += 1;
      }
    } else {
      marks += 1;
    }
  }
  bool check = false;
  for(ll i=26; i<=max(26LL, (ll)s.length()); i++){
    if(cur + marks == 26 and !check){
      check = true;
      string q = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      for(ll j=i-26; j<i; j++){
        if(s[j] == '?'){
          for(ll k=0; k<26; k++){
            if(mci[q[k]] == 0){
              s[j] = q[k];
              mci[q[k]] = 1;
              break;
            }
          }
        }
      }
    } else if (!check){
      if (s[i-26] == '?') {
        marks -= 1;
      } else {
        mci[s[i-26]] -= 1;
        if(mci[s[i-26]] == 0){
          cur -= 1;
        }
      }
      if(s[i] != '?'){
        mci[s[i]] += 1;
        if(mci[s[i]] == 1){
          cur += 1;
        }
      } else {
        marks += 1;
      }
    } else if (s[i] == '?' and check){
      s[i] = 'A';
    }
  }
  if(check){
    for(ll i=0; i<s.length(); i++){
      if(s[i] == '?'){
        s[i] = 'A';
      }
    }
  }
  cout << (check ? s : "-1");
  return 0;
}