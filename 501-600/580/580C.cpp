#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll cats[n];
    for(ll i=0; i<n; i++){
        cin >> cats[i];
    }
    vector<ll> v[n];
    vector<bool> vis(n, false);
    for(ll i=0; i<n-1; i++){
        ll x, y;
        cin >> x >> y;
        v[x-1].emplace_back(y-1);
        v[y-1].emplace_back(x-1);
    }
    queue< pair<ll, ll> > qp;
    qp.push(make_pair(0,cats[0]));
    ll ans = 0;
    while(!qp.empty()){
        pair<ll, ll> fr = qp.front();
        qp.pop();
        vis[fr.f] = 1;
        if(v[fr.f].size() == 1 and fr.s <= m and fr.f != 0){
            ans += 1;
        }
        else{
            for(ll i=0; i<v[fr.f].size(); i++){
                ll q = v[fr.f][i];
                if(fr.s+cats[q] <= m and !vis[q]){
                    qp.push(make_pair(q, (fr.s+cats[q])*cats[q]));
                }
            }
        }
    }
    cout << ans;
    return 0;
}
//dominant character from 1400-1500
