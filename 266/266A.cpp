#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    for(ll i=1; i<n-1; i++){
        if(i == 1){
            if(s[i-1] == 'R'){
                s[i] = (s[i+1] == 'R' ? 'G' : (s[i+1] == 'G' ? 'B' : 'R'));
                ans ++;
            }
            else if(){

            }
        }
    }
    cout << ans;
    return 0;
}