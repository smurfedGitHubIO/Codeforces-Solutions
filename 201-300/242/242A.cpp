#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

int main(){
    ll x , y , a , b;
    cin >> x >> y >> a >> b;
    vector<pll> v;
    for(ll i=a; i<=x; i++){
        if(i > b){
            for(ll j=b; j<=y; j++){
                if(i > j){
                    v.emplace_back(mp(i, j));
                }else{
                    break;
                }
            }
        }
    }
    sort(begin(v), end(v));
    cout << v.size() << "\n";
    for(ll i=0; i<v.size(); i++){
        cout << v[i].f << " " << v[i].s << "\n";
    }
    return 0;
}