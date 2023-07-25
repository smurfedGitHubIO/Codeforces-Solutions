#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> color(n, -1);
    vector<bool> vis(n, 0);
    vector<ll> adjlist[n];
    ll x, y;
    for(ll i=0; i<m; i++){
        cin >> x >> y;
        --x, --y;
        adjlist[x].emplace_back(y);
        adjlist[y].emplace_back(x);
    }
    vector<ll> white;
    vector<ll> black;
    for(ll i=0; i<n; i++){
        if(!vis[i]){
            black.emplace_back(i);
            queue<ll> qp;
            qp.push(i);
            color[i] = 0;
            while(!qp.empty()){
                ll tp = qp.front();
                qp.pop();
                vis[tp] = 1;
                for(ll i=0; i<adjlist[tp].size(); i++){
                    x = adjlist[tp][i];
                    if(color[x] == color[tp]){
                        cout << -1;
                        return 0;
                    }
                    else if(color[x] == -1){
                        if(color[tp] == 0){
                            color[x] = 1;
                            white.emplace_back(x);
                        }
                        else{
                            color[x] = 0;
                            black.emplace_back(x);
                        }
                        qp.push(x);
                    }
                }
            }
        }
    }
    cout << black.size() << "\n";
    for(auto x : black){
        cout << x+1 << " ";
    }
    cout << "\n" << white.size() << "\n";
    for(auto x : white){
        cout << x+1 << " ";
    }
    return 0;
}