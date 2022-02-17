#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
const ll INF = 1e17 + 11;

void solve(){
    ll n;
    cin >> n;
    ll A[n];
    map<ll, ll> perval;
    map<ll, ll> cnt;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        perval[A[i]] += 1;
        if(perval[A[i]] == 1){
            cnt[1] += 1;
        }
        else{
            cnt[perval[A[i]]-1] -= 1;
            cnt[perval[A[i]]] += 1;
        }
    }
    vector<ll> vl;
    ll cur = 0;
    for(auto x : cnt){
        if(x.s != 0){
            vl.emplace_back(x.f);
            cur += x.s*x.f;
        }
    }
    sort(begin(vl), end(vl));
    cur -= cnt[vl[vl.size()-1]]*vl[vl.size()-1];
    ll ans = INF, left = 0;
    for(ll i=vl.size()-1; i>=0; i--){
        ans = min(ans, cur+left);
        if(i > 0){
            left += (vl[i]-vl[i-1])*cnt[vl[i]];
            cur -= cnt[vl[i-1]]*vl[i-1];
            cnt[vl[i-1]] += cnt[vl[i]];
        }
    }
    cout << ans << "\n";
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}