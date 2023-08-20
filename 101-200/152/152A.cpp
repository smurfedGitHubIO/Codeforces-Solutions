#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

ll xs[] = {-1, 1, 0, 0, -1, -1, 1, 1};
ll ys[] = {0, 0, -1, 1, -1, 1, 1, -1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    string s[n];
    for(ll i=0; i<n; i++){
        cin >> s[i];
    }
    ll ans = 0;
    for(ll i=0; i<n; i++){
        vector<ll> v(m, 0);
        for(ll j=0; j<n; j++){
            if(i != j){
                for(ll k=0; k<m; k++){
                    if((s[i][k]-'0') >= (s[j][k]-'0')){
                        v[k] += 1;
                    }
                }
            }
        }
        for(ll j=0; j<m; j++){
            if(v[j] == n-1){
                ans++;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}