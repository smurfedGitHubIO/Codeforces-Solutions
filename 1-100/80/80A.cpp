#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool isprime(ll x){
    ll i=2;
    while(i*i <= x){
        if(x%i == 0) return false;
        i++;
    }
    return true;
}

int main(){
    ll n, m;
    cin >> n >> m;
    for(ll i=1; i<=50; i++){
        if(isprime(n+i) and m >= n+i){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}