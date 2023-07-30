#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    char s[4][4];
    for(ll i=0; i<4; i++){
        for(ll j=0; j<4; j++){
            cin >> s[i][j];
        }
    }
    bool check = false;
    for(ll i=0; i<3; i++){
        for(ll j=0; j<3; j++){
            ll cnt = (s[i][j] == '#') + (s[i+1][j] == '#') + (s[i][j+1] == '#') + (s[i+1][j+1] == '#');
            if(cnt != 2){
                check = 1;
            }
        }
    }
    cout << (check ? "YES\n" : "NO\n");
    return 0;
}