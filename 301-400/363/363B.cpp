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
    ll cur = 0, mn = 100000000000000, ind = -1;
    for(ll i=0; i<m; i++){
        cur += A[i];
    }
    ind = 0, mn = cur;
    for(ll i=m; i<n; i++){
        cur -= A[i-m];
        cur += A[i];
        if(mn > cur){
            mn = cur;
            ind = A[i-m+1];
        }
    }
    cout << ind;
    return 0;
}