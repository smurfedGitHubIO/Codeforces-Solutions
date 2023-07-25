#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll z = math.sqrt((b*c)/a);
    ll x=c/z, y=b/z;
    cout << x*4+y*4+z*4;
    return 0;
}