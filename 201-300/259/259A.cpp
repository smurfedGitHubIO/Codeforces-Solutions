#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    bool check = true;
    for(ll i=0; i<8; i++){
        cin >> s;
        for(ll j=1; j<8;j++){
            if(s[j] == s[j-1]){
                check = false;
            }
        }
    }
    cout << (check ? "YES" : "NO");
    return 0;
}