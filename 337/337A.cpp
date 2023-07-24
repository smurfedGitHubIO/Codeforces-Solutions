#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll A[m];
    for(ll i=0; i<m; i++){
        cin >> A[i];
    }
    sort(A, A+m);
    ll mn = 100000000;
    for(ll i=0; i<=m-n; i++){
        mn = min(mn, A[i+n-1]-A[i]);
    }
    cout << mn;
    return 0;
}