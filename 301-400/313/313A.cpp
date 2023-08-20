#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

ll xs[] = {-1, 1, 0, 0, -1, -1, 1, 1};
ll ys[] = {0, 0, -1, 1, -1, 1, 1, -1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    if(s[0] != '-'){
        cout << s;
    }else{
        ll n = s.length();
        ll ans = 0;
        if((s[n-1]-'0') > (s[n-2]-'0')){
            for(ll i=1; i<n; i++){
                if(i != n-1){
                    ans *= (ans != 0 ? 10 : 1);
                    ans += (s[i]-'0');
                }
            }
        }else{
            for(ll i=1; i<n; i++){
                if(i != n-2){
                    ans *= (ans != 0 ? 10 : 1);
                    ans += (s[i]-'0');
                    cout << ans << "\n";
                }
            }
        }
        cout << ans*-1;
    }
    return 0;
}