#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll x, y;
    cin >> x >> y;
    if(x > 0 and y > 0){
        cout << "0 " << x+y << " " << x+y << " 0";
    }else if (x < 0 and y > 0){
        cout << -(abs(x)+y) << " 0 0 " << abs(x)+y;
    }else if (x > 0 and y < 0){
        cout << "0 " << -(x+abs(y)) << " " << x+abs(y) << " 0";
    }else{
        cout << x+y << " 0 0 " << x+y;
    }
    return 0;
}