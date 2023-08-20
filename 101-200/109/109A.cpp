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
    ll q = n/4;
    for(ll i=0; i<=q; i++){
        if((n-i*4)%7 == 0){
            for(ll j=0; j<i; j++){
                cout << 4;
            }
            ll qt = (n-i*4)/7;
            for(ll j=0; j<qt; j++){
                cout << 7;
            }
            return 0;
        }
    }
    cout << -1;
    return 0;
}