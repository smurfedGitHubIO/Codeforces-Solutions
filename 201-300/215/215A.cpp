#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n,m;
    cin >> n;
    ll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i];
    }
    cin >> m;
    ll B[m];
    for(ll i=0; i<m; i++){
        cin >> B[i];
    }
    ll mx = -1;
    map<ll ,ll> ml;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            ll q = B[j]/A[i];
            if(q*A[i] == B[j]){
                ml[q] += 1;
                if(ml[mx] < ml[q]){
                    mx = q;
                }
            }
        }
    }
    cout << ml[mx];
    return 0;
}