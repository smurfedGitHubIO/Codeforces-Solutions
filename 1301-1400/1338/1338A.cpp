#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll A[n];
        for(ll i=0; i<n; i++){
            cin >> A[i];
        }
        ll cur = 0, cnt = 1;
        for(ll i=1; i<n; i++){
            if(A[i] < A[i-1]){
                ll q = A[i-1]-A[i];
                ll p = 0, pc = 1, qc= 1;
                while(qc < q){
                    pc *= 2;
                    qc += pc;
                    p ++;
                }
                A[i] = A[i-1];
                cur = max(cur, p+1);
            }
        }
        cout << cur << "\n";
    }
    return 0;
}