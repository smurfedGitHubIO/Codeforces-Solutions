#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        ll A[n], B[m];
        for(ll i=0; i<n; i++){
            cin >> A[i];
        }
        sort(A, A+n);
        ll ones = 0;
        for(ll i=0; i<m; i++){
            cin >> B[i];
            if(B[i] == 1){
                ones += 1;
            }
        }
        ll ans = 0;
        sort(B, B+m);
        for(ll i=n-1; i>=n-ones; i--){
            ans += A[i]*2;
        }
        ll left = 0, right = n-ones-1, cur=m-1;
        while(cur >= ones){
            ans += A[right]+A[left];
            right -= 1;
            left += B[cur]-1;
            cur -= 1;
        }
        cout << ans << "\n";
    }
    return 0;
}
