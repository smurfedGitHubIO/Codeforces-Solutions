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
    ll n;
    cin >> n;
    ll x, y;
    ll ans = 0;
    for(ll i=0; i<n; i++){
        cin >> x >> y;
        ans += (y-x >= 2);
    }
    cout << ans;
    return 0;
}