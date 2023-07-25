#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

int main(){
    ll n;
    cin >> n;
    pll P[n];
    for(ll i=0; i<n; i++){
        cin >> P[i].f >> P[i].s;
    }
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ll u=0, d=0, l=0, r=0;
        for(ll j=0; j<n; j++){
            if(j!=i){
                if(P[j].f == P[i].f and P[j].s < P[i].s){
                    d++;
                }
                if(P[j].f == P[i].f and P[j].s > P[i].s){
                    u++;
                }
                if(P[j].f < P[i].f and P[j].s == P[i].s){
                    l++;
                }
                if(P[j].f > P[i].f and P[j].s == P[i].s){
                    r++;
                }
            }
        }
        ans += (d>0 and u>0 and l>0 and r>0);
    }
    cout << ans;
    return 0;
}