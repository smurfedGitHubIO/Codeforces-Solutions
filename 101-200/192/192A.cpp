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
    ll x = sqrt(2*n)+1;
    for(ll i=1; i<=x; i++){
        ll st = i;
        ll en = x;
        while(st<=en){
            ll md = st+(en-st)/2;
            if(md*md+md+i*i+i == 2*n){
                cout << "YES";
                return 0;
            }else if(md*md+md+i*i+i < 2*n){
                st = md+1;
            }else{
                en=md-1;
            }
        }
    }
    cout << "NO";
    return 0;
}