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
    pll A[2*n];
    for(ll i=0; i<2*n; i++){
        cin >> A[i].f;
        A[i].s = i+1;
    }
    sort(A, A+(2*n));
    pll ans[n];
    for(ll i=0; i<2*n; i+=2){
        if(A[i].f == A[i+1].f){
            ans[i/2] = mp(A[i].s, A[i+1].s);
        }else{
            cout << -1;
            return 0;
        }
    }
    for(ll i=0; i<n; i++){
        cout << ans[i].f << " " << ans[i].s << "\n";
    }
    return 0;
}