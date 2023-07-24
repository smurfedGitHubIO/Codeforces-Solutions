#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    string s;
    cin >> s;
    for(ll i=0; i<s.length(); i++){
        char x = tolower(s[i]);
        if(x == 'a' or x == 'e' or x == 'y' or x == 'i' or x == 'u' or x == 'o'){
            continue;
        } else {
            cout << "." << x;
        }
    }
    return 0;
}