#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

const ll MOD = 1e9 + 7;
const ll MAXN = 2001;

ll xs[] = {-1, 1, 0, 0, -1, -1, 1, 1};
ll ys[] = {0, 0, -1, 1, -1, 1, 1, -1};

ll dp[MAXN][MAXN];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    vector<ll> v[MAXN];
    for(ll i=1; i<MAXN; i++){
        for(ll j=1; j<=i; j++){
            if(i%j == 0){
                v[i].emplace_back(j);
            }
        }
    }
    for(ll j=1; j<=m; j++){
        for(ll i=1; i<=n; i++){
            if(j == 1){
                dp[i][j] = 1;
            }else{
                dp[i][j] = 0;
                for(ll k=0; k<v[i].size(); k++){
                    dp[i][j] = (dp[i][j]+dp[v[i][k]][j-1])%MOD;
                }
            }
        }
    }
    ll ans = 0;
    for(ll i=1; i<=n; i++){
        // cout << dp[i][m] << "\n";
        ans = (ans+dp[i][m])%MOD;
    }
    cout << ans;
    return 0;
}