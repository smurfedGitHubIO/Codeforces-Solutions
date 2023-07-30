#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    ll B[n];
    for(ll i=0; i<n; i++){
        cin >> A[i];
        B[i] = A[i];
    }
    vector<ll> v1, v2;
    sort(B, B+n);
    v1.emplace_back(0);
    v2.emplace_back(0);
    for(ll i=0; i<n; i++){
        v1.emplace_back(v1[v1.size()-1]+A[i]);
        v2.emplace_back(v2[v2.size()-1]+B[i]);
    }
    ll q;
    cin >> q;
    while(q--){
        ll m, l, r;
        cin >> m >> l >> r;
        --l;
        if(m == 1){
            cout << v1[r] - v1[l] << "\n";   
        }else{
            cout << v2[r] - v2[l] << "\n";
        }
    }
    return 0;
}