#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

bool cmp(pll A, pll B){
    if(A.f == B.f){
        return A.s < B.s;
    }
    return A.f < B.f;
}

int main(){
    ll n;
    cin >> n;
    pll A[n];
    for(ll i=0; i<n; i++){
        cin >> A[i].f;
        A[i].s = i+1;
    }
    sort(A, A+n, cmp);
    ll mn = 1000000000;
    for(ll i=0; i<n-1; i++){
        mn = min(mn, A[i+1].f-A[i].f);
    }
    for(ll i=0; i<n-1; i++){
        if(A[i+1].f-A[i].f == mn){
            cout << A[i].s << " " << A[i+1].s;
            return 0;
        }
    }
    return 0;
}