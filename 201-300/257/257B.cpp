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
    ll nn = n, mm = m;
    ll last = -1;
    ll a =0, b=0;
    for(ll i=1; i<=nn+mm; i++){
        if(i == 1){
            if(n > m){
                n -= 1;
                last = 1;
            }else{
                m -= 1;
                last = 0;
            }
        }else{
            if(i&1){
                if(n > m){
                    n -= 1;
                    last = 1;
                }else{
                    m -= 1;
                    last = 2;
                }
            }else{
                if(n > m){
                    m -= 1;
                    last = 2;
                    b += 1;
                }else{
                    n -= 1;
                    last = 1;
                    a += 1;
                }
            }
        }
    }
    return 0;
}