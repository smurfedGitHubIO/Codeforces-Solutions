#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll a, b, n;
    cin >> a >> b >> n;
    ll cnt = 0, ans = 0;
    for(ll i=0; i<10; i++){
        if((a*10+i)%b == 0){
            cnt = 1;
            ans = i;
            break;
        }
    }
    if(cnt == 1){
        cout << a*10+ans;
        for(ll i=0; i<max(0LL,n-1); i++){
            cout << 0;
        }
    }else{
        cout << -1;
    }
    return 0;
}