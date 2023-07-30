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
    pll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i].f >> A[i].s;
    }
    sort(A, A+n);
    for(ll i=0; i<n; i++){
        if(A[i].f == A[0].f and A[i].s == A[n-1].s){
            cout << i+1 << "\n";
            return 0;
        }
    }
    cout << -1;
    return 0;
}