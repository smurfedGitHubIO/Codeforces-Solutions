#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, k;
    cin >> n >> k;
    map<ll, ll> taken;
    ll A[k];
    for(ll i=0; i<k; i++){
        cin >> A[i];
        taken[A[i]] = 1;
    }
    ll cur = 1;
    for(ll i=0; i<k; i++){
        cout << A[i] << " ";
        for(ll i=0; i<n-1; i++){
            while(!taken[cur]){
                cur++;
            }
            cout << cur << " ";
        }
        cout << "\n";
    }
    return 0;
}