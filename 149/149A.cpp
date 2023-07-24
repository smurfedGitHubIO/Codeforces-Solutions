#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[12];
    for(ll i=0; i<12; i++){
        cin >> A[i];
    }
    sort(A, A+12);
    ll ans = 0, i=11;
    while(n>0){
        ans++;
        n -= A[i];
        i--;
    }
    cout << (n > 0 ? -1 : ans);
    return 0;
}