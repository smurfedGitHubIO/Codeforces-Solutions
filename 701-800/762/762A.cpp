#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> ans;
    for(ll i=1; i*i <= n; i++){
        if(n%i == 0){
            ans.emplace_back(i);
            if(i*i != n){
                ans.emplace_back(n/i);
            }
        }
    }
    sort(begin(ans), end(ans));
    if(k > ans.size()){
        cout << -1;
    }
    else{
        cout << ans[k-1];
    }
    return 0;
}