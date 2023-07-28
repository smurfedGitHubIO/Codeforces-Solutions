#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i];
    }
    vector<ll> v;
    ll s = -1, e = -1;
    for(ll i=0; i<n; i++){
        if(A[i] != i+1){
            if(v.size() > 0 and v[v.size()-1]+1 != i){
                cout << "no";
                return 0;
            }else if(v.size() > 0 and A[i-1]-1 != A[i]){
                cout << "no";
                return 0;
            }
            v.emplace_back(i);
            if(s == -1){
                s = i;
            }else{
                e = i;
            }
        }else if(A[i] == i+1 and v.size() > 0 and A[i-1] == A[i]+1){
            v.emplace_back(i);
            e = i;
        }
    }
    if(v.size() == 0){
        cout << "yes\n1 1";
    }else{
        cout << "yes\n";
        cout << v[0]+1 << " " << v[v.size()-1]+1;
    }
    return 0;
}