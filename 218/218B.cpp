#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll A[m] B[m];
    ll q = n;
    for(ll i=0; i<m; i++){
        cin >> A[i];
        B[i] = A[i];
    }
    sort(A, A+n, reverse=true);
    sort(B, B+n);
    ll mx = 0, mn=0;
    for(ll i=0; i<m; i++){
        for(ll j=B[i]; B>=0; B--){
            if(q == 0)
                break;
            mn+=j;
            B[i] = j;
            q--;
        }
        if(q == 0) break;
    }
    ll i = 0;
    while(1){
        i = (i+1)%m;
        mx+=B[i];
        B[i]--;
        n--;
        ll cnt=0;
        for(ll j=0; j<m; j++){
            cnt += (B[j] == 0);
        }
        if(cnt == m) break;
        if(n == 0) break;
    }
    cout << mx << " " << mn;
    return 0;
}