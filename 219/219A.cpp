#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mcl;
    for(ll i=0; i<s.length(); i++){
        mcl[s[i]] += 1;
    }
    string ans = "";
    for(auto x : mcl){
        if(x.second%n != 0){
            cout << -1;
            return 0;
        }
        for(ll i=0; i<(int)x.second/n; i++){
            ans += x.first;
        }
    }
    for(ll i=0; i<n; i++){
        cout << ans;
    }
    return 0;
}