#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 501;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> v[MAXN];
    ll cnt = 0;
    for(ll i=0; i<n; i++){
        ll x, y;
        cin >> x;
        cnt += (x == 0);
        for(ll j=0; j<x; j++){
            cin >> y;
            v[y-1].emplace_back(100+i);
            v[100+i].emplace_back(y-1);
        }
    }
    vector<bool> vis(MAXN, false);
    bool first = false;
    for(ll i=0; i<n; i++){
        if(!vis[100+i] and v[100+i].size() != 0){
            queue<ll> q;
            q.push(100+i);
            vis[100+i] = true;
            while(!q.empty()){
                ll fr = q.front();
                q.pop();
                for(ll j=0; j<v[fr].size(); j++){
                    if(!vis[v[fr][j]]){
                        q.push(v[fr][j]);
                        vis[v[fr][j]] = 1;
                    }
                }
            }
            cnt += (first);
            first = 1;
        }
    }
    cout << cnt;
    return 0;
}