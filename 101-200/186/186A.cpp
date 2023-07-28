#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    char s[10001];
    char t[10001];
    scanf("%*c", s);
    scanf("%*c", t);
    ll ns = strlen(s), nt = strlen(t);
    if(ns != nt){
        cout << "NO\n";
    }else{
        ll sx=-1, sy=-1;
        for(ll i=0; i<ns; i++){
            if(s[i] != t[i]){
                if(sx == -1){
                    sx = i;
                }else if(sy == -1){
                    sy = i;
                }else{
                    cout << "NO\n";
                    return 0;
                }
            }
        }
        if(s[sx] == t[sy] and s[sy] == t[sx]){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}