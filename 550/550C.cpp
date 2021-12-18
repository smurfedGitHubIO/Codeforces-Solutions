#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main(){
    string s;
    cin >> s;
    ll n = s.length();
    bool check = false;
    for(ll i=n-1; i>=0; i--){
        ll q = s[i]-'0';
        if(q%2 == 0){
            if(q%8 == 0){
                cout << "YES\n" << q;
                return 0;
            }
            for(ll j=i-1; j>=0; j--){
                ll p=s[j]-'0';
                if((p*10 + q)%8 == 0){
                    cout << "YES\n" << p*10 + q;
                    return 0;
                }
                for(ll k=j-1; k>=0; k--){
                    ll r = s[k]-'0';
                    if((r*100 + p*10 + q)%8 == 0){
                        cout << "YES\n" << r*100+p*10 + q;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
