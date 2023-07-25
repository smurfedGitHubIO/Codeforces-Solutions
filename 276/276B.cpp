#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    map<char, ll> mcl;
    ll odds = 0, did=0;
    for(ll i=0; i<s.length(); i++){
        mcl[s[i]] += 1;
    }
    for(auto x : mcl){
        if(x.second&1){
            odds++;
            did=1;
        }
    }
    cout << (odds&1 or !did ? "First\n" : "Second\n");
    return 0;
}