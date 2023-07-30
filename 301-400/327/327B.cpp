#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 5e5 + 11;
vector<ll> primes;
vector<ll> isP(MAXN, true);

void init(){
    isP[0] = isP[1] = false;
    for(ll i=2; i<MAXN; i++){
        if(isP[i]){
            primes.emplace_back(i);
        }
        for(ll j=0; j<primes.size() and i*primes[j] < MAXN; j++){
            isP[i*j] = false;
        }
    }
}

int main(){
    init();
    ll n;
    cin >> n;
    for(ll i=0; i<n; i++){
        cout << primes[i] << " ";
    }
    return 0;
}