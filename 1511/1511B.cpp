#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef long long int ll;
const ll INF = 1e17;

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> ans;
    bool check = false;
    if(a > b){
        swap(a,b);
        check = 1;
    }
    string s = "3141592653";
    ll n = 0, first = 1, second = 1;
    for(ll i=0; i<b-c+1; i++){
        n = n*10 + (s[i]-'0');
    }
    for(ll i=1; i<a ;i++){
        first *= 10;
    }
    for(ll i=1; i<c ;i++){
        second *= 10;
    }
    if(check){
        cout << n*second << " " << first << "\n";
    }
    else{
        cout << first << " " << n*second << "\n";
    }
}

int main(){
    ll T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
