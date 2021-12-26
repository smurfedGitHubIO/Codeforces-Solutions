#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
const ll INF = 1e17;

void solve(){
    ll n, k;
    cin >> n >> k;
    pair<ll,ll> v[k];
    for(ll i=0; i<k; i++){
        cin >> v[i].s;
        --v[i].s;
    }
    vector<ll> ans(n, INF);
    for(ll i=0; i<k; i++){
        cin >> v[i].f;
        ans[v[i].s] = v[i].f;
    }
    sort(v, v+k);
    for(ll i=0; i<k; i++){
    	ll q = v[i].s+1, p = v[i].s-1;
        while(q < n){
            if(ans[q] > v[i].f + abs(v[i].s-q)){
            	ans[q] = v[i].f + abs(v[i].s-q);
            	q++;
            }
            else{
                break;
            }
        }
        while(p >= 0){
            if(ans[p] > v[i].f + abs(v[i].s-p)){
               	ans[p] = v[i].f + abs(v[i].s-p);
            	p--;
            }
            else{
                break;
            }
        }
    }
    for(ll i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main(){
    ll T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
