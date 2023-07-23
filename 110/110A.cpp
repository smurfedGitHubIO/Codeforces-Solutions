#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    ll n = s.length();
    ll cnt = 0;
    for(ll i=0; i<n; i++){
        if(s[i] == '4' or s[i] == '7')
          cnt+=1;
    }
    if(cnt != 4 and cnt != 7){
      cout << "NO\n";
      return 0;
    }
    cout << "YES\n";
    return 0;
}