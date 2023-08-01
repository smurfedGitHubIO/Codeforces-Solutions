#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    map<ll, ll> ml;
    ll x;
    for(ll i=0; i<n; i++){
        cin >> x;
        if(i == 0){
            if(x == 25){
                ml[x] += 1;
            }else{
                cout << "NO";
                return 0;
            }
        }else{
            if(x == 25){
                ml[x] += 1;
            }else if(x == 50){
                if(ml[25] >= 1){
                    ml[25] -= 1;
                    ml[50] += 1;
                }else{
                    cout << "NO";
                    return 0;
                }
            }else{
                if(ml[25] >= 1 and ml[50] >= 1){
                    ml[50] -= 1;
                    ml[25] -= 1;
                    ml[100] += 1;
                }else if(ml[25] >= 3){
                    ml[25] -= 3;
                    ml[100] += 1;
                }else {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
    return 0;
}