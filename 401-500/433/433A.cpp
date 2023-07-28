#include <bits/stdC++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n=0,x,cnt=0,ct=0;
    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> x;
        cnt += (x == 100);
        ct += (x == 200);
    }
    cout << ((ct&1 and !(cnt&1) and cnt > 0) or (!(cnt&1) and !(ct&1)) ? "YES" : "NO");
    return 0;
}