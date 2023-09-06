#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

ll xs[] = {-1, 1, 0, 0, -1, -1, 1, 1};
ll ys[] = {0, 0, -1, 1, -1, 1, 1, -1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll A[n];
    ll cnt = 0;
    map<ll, ll> ml;
    vector<ll> v;
    vector<ll> b;
    ll mx = 0;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        ml[A[i]] += 1;
        if(ml[A[i]] <= 2){
            cnt ++;
            if(ml[A[i]] == 1){
                v.emplace_back(A[i]);
            }else{
                b.emplace_back(A[i]);
            }
            mx = max(A[i], mx);
        }
    }
    if(ml[mx] >= 2){
        cnt --;
    }
    sort(begin(v), end(v));
    sort(begin(b), end(b), greater<ll>());
    cout << cnt << "\n";
    for(ll i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    for(ll i=0; i<b.size(); i++){
        if(b[i] != mx){
            cout << b[i] << " ";
        }
    }
    return 0;
}