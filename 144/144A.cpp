#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    ll mx = 0, xi = -1;
    ll mn = 1000000, ni = -1;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        if(A[i] > mx){
            mx = A[i];
            xi = i;
        }
        if(A[i] < mn){
            mn = A[i];
            ni = i;
        }
    }
    if(ni > xi){
        cout << (xi-1)+(n-ni);
    } else {
        cout << (xi-1)+(n-ni-1);
    }
    return 0;
}