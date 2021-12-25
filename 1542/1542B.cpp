#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a, b, n;
        cin >> n >> a >> b;
        if(b == 1){
            cout << "Yes\n";
        }
        else if(a == 1){
            cout << (n%b == 1 ? "Yes\n" : "No\n");
        }
        else{
            bool ans = false;
            ll cur = 1;
            while(cur <= n){
                if((n-cur)%b == 0){
                    ans = true;
                    break;
                }
                cur *= a;
            }
            cout << (ans ? "Yes\n" : "No\n");
        }
    }
}