#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    vector<ll> v[100001];
    for(ll i=0; i<n; i++){
        cin >> A[i];
        v[A[i]].emplace_back(i+1);
    }
    vector<pair<ll, ll>> vp;
    for(ll i=1; i<=100000; i++){
        // cout << v[i].size() << "\n";
        if(v[i].size() > 0){
            // cout << i << "\n";
            ll last = 0;
            bool check = true;
            for(ll j=1; j<v[i].size(); j++){
                if(j == 1){
                    last = v[i][j] - v[i][j-1];
                }else if(v[i][j] - v[i][j-1] == last){
                    continue;
                }else{
                    check = false;
                    break;
                }
            }
            if(check){
                vp.emplace_back(make_pair(i, last));
            }
        }
    }
    cout << vp.size() << "\n";
    for(ll i=0; i<vp.size(); i++){
        cout << vp[i].first << " " << vp[i].second << "\n";
    }
    return 0;
}