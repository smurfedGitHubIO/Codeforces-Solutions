#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    map<ll, ll> here;
    map<ll, ll> front;
    map<ll, ll> taken;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        here[A[i]] = 1;
        front[A[i]] = -1;
    }
    ll back;
    stack<ll> vl;
    for(ll i=0; i<n; i++){
        ll div = A[i]*3, mul = A[i]/2;
        if(here[div] and div/3 == A[i]){
            front[A[i]] = div;
            taken[div] = 1;
        }
        else if(here[mul] and mul*2 == A[i]){
            front[A[i]] = mul;
            taken[mul] = 1;
        }
    }
    for(ll i=0; i<n; i++){
        if(taken[A[i]] == 0){
            back = A[i];
        }
    }
    while(back != -1){
        vl.push(back);
        back = front[back];
    }
    while(!vl.empty()){
        cout << vl.top() << " ";
        vl.pop();
    }
    return 0;
}
