#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    ll n = s.length();
    for(ll i=0; i<n; i++){
        if(s[i] == '.'){
            cout << 0;
        } else{
            if(s[i+1] == '-'){
                cout << 2;
            } else {
                cout << 1;
            }
            i++;
        }
    }
    return 0;
}