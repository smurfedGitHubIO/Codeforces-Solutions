#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll o1=0, o2=0;
    ll x,y,s=0;
    for(ll i=0; i<n; i++){
        cin >> x >> y;
        o1 += (x&1 and !(x&1 and y&1));
        o2 += (y&1 and !(x&1 and y&1));
        same += (x&1 or y&1);
    }
    o1 = o1%2;
    o2 = o2%2;
    cout << (same&1 ? -1 : min(o1, o2));
    return 0;
}