#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    m--;
    ll x;
    map<ll, ll> ml;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        cin >> x;
        v.emplace_back(x);
        ml[x] += 1;
    }
    ll last = 0, j=0;
    while(1){
        if(j == 0){
            last = v[m++];
            ml[last] += 1;
            ml[A[j++]] -= 1;
            if(ml[last] == n){
                cout << j;
                return 0;
            }
        } else {
            if(last != v[m++]){
                cout << -1;
                return 0;
            }
            ml[last] += 1;
            ml[A[j++]] -= 1;
            if(ml[last] == n){
                cout << j;
                return 0;
            }
        }
    }
    return 0;
}