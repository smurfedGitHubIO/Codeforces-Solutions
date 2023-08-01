#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll A[n*m];
    ll mn = 10000000000, sm = 0;
    for(ll i=0; i<n*m; i++){
        cin >> A[i];
        sm += A[i];
    }
    sort(A, A+(n*m));
    if(n*m == 1){
        cout << 0;
    }else{
        ll cur = 0;
        for(ll i=0; i<n*m; i++){
            if(abs(A[i]-A[i+1])%k != 0 and i<n*m-1){
                cout << -1;
                return 0;
            }
            sm -= A[i];
            mn = min(mn, ((sm-A[i]*(n*m-(i+1))+(A[i]*i-cur))/k));
            cur += A[i];
        }
        cout << mn;
    }
    return 0;
}