#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

const ll INF = 1e18;

ll xs[] = {-1, 1, 0, 0, -1, -1, 1, 1};
ll ys[] = {0, 0, -1, 1, -1, 1, 1, -1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    ll x, ch=0;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        cin >> x;
        if(x == m){
            ch = 1;
        }
        v.emplace_back(x);
    }
    if(!ch){
        v.emplace_back(m);
    }
    sort(begin(v), end(v));
    vector<ll> inds;
    for(ll i=0; i<v.size(); i++){
        if(v[i] == m){
            inds.emplace_back(i);
        }
    }
    ll mn = INF;
    for(ll i=0; i<inds.size(); i++){
        mn = min(mn, abs(n-1-inds[i]-(inds[i]-1)));
    }
    cout << mn+(!ch);
    return 0;
}