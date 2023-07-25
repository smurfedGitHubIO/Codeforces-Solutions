#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    ll i, j, x, y;
    cin >> n >> i >> j >> x >> y;
    char s;
    ll pt = 0;
    vector<ll> v;
    vector<ll> w;
    for(ll k=0; k<n; k++){
        cin >> s;
        if(x < i and s == 'W'){
            v.emplace_back(k);
        }
        if(x > i and s == 'E'){
            v.emplace_back(k);
        }
        if(y < j and s == 'S'){
            w.emplace_back(k);
        }
        if(y > j and s == 'N'){
            w.emplace_back(k);
        }
    }
    if(w.size() < abs(y-j) or v.size() < abs(x-i)){
        cout << -1;
    } else {
        cout << max(w[abs(y-j)-1],v[abs(x-i)-1])+(max(w[abs(y-j)-1],v[abs(x-i)-1]) != 0);
    }
    return 0;
}