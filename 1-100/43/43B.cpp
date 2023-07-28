#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    char s[201];
    char t[201];
    scanf("%[^\n]%*c", s);
    scanf("%[^\n]%*c", t);
    ll ns = strlen(s), nt = strlen(t);
    map<char, ll> mcl;
    for(ll i=0; i<ns; i++){
        if(s[i] != ' '){
            mcl[s[i]] += 1;
        }
    }
    for(ll i=0; i<nt; i++){
        if(t[i] != ' '){
            mcl[t[i]] -= 1;
            if(mcl[t[i]] < 0){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}