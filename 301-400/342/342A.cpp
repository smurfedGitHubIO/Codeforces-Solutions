#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i];
    }
    ll q = n/3;
    for(ll i=1; i<3; i++){
        for(ll j=0; j<q; j++){
            if(A[i*q+j]%A[(i-1)*q+j] != 0){
                cout << -1;
                return 0;
            }
        }
    }
    for(ll j=0; j<q; j++){
        cout << A[j] << " " << A[j+q] << " " << A[j+2*q] << "\n";
    }
    return 0;
}