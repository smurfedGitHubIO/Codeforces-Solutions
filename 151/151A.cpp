#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n, k, l, c, d, p, nl, nm, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> nm >> np;
    cout << min((k*l)/nl, c*d, p/np)/n;
    return 0;
}