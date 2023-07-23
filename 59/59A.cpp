#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    ll a=0, b=0;
    for(ll i=0; i<s.length(); i++){
        if(s[i] == toupper(s[i])){
            b++;
        } else {
            a++;
        }
    }
    if(a <= b){
        for(ll i=0; i<s.length(); i++){
            cout << tolower(s[i]);
        }
    } else {
        for(ll i=0; i<s.length(); i++){
            cout << toupper(s[i]);
        }
    }
    return 0;
}