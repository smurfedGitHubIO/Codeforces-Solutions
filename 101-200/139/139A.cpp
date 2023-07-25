#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[7];
    for(ll i=0; i<7; i++){
        cin >> A[i];
    }
    ll i=0;
    while(1){
        if(A[i%7] >= n){
            cout << i%7 + 1;
            return 0;
        }
        n -= A[i%7];
        i++;
    }
    return 0;
}