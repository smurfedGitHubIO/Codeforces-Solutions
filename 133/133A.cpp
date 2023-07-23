#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    ll n = s.length();
    for(ll i=0; i<n; i++){
        if(s[i] == 'H' or s[i] == 'Q' or s[i] == '9'){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}