#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    ll B[n];
    for(ll i=0; i<n; i++){
        cin >> A[i];
        B[i] = A[i];
    }
    sort(B,B+n);
    vector<ll> v;
    for(ll i=0; i<n; i++){
        if((A[i] != B[i] and v.size() == 0) or (v.size() > 0 and A[i]+1 == A[v[v.size()-1]])){
            v.emplace_back(i);
        }else if(A[i] == B[i]){
            continue;
        }else{
            cout << "no\n";
            return 0;
        }
    }
    if(v.size() == 0){
        cout << "yes\n1 1";
    }else{
        cout << "yes\n" << v[0]+1 << " " << v[v.size()-1]+1;
    }
    return 0;
}