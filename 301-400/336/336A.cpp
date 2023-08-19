#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll x, y;
    cin >> x >> y;
    if((y+x)*(x<0) < 0){
        cout << y+x << " 0 0 " << x-y;
    }else {
        cout << "0 " << x-y << " " << y-x << " 0";
    }
    return 0;
}