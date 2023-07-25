#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i];
    }
    sort(A, A+n);
    ll sm = 0;
    for(ll j=0; j<m; j++){
        if(A[j] > 0)
            break;
        sm += -A[j];
    }
    cout << sm;
    return 0;
}