#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    map<string, ll> msl;
    ll mx = 0;
    string ans = "";
    for(ll i=0; i<n; i++){
        string s;
        cin >> s;
        msl[s] += 1;
        if(mx < msl[s]){
            ans = s;
            mx = msl[s];
        }
    }
    cout << ans;
    return 0;
}