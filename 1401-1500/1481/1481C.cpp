#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll a[n], b[n];
        map<ll, ll> here;
        queue<ll> needs[n];
        ll ans[m];
        ll cont[m];
        for(ll i=0; i<n; i++){
            cin >> a[i];            
        }
        for(ll i=0; i<n; i++){
            cin >> b[i];
            if(b[i] != a[i]){
                needs[b[i]-1].push(i);
            }
            here[b[i]] = i+1;
        }
        for(ll i=0; i<m; i++){
            cin >> cont[i];
            ans[i] = -1;
        }
        bool check = true;
        for(ll i=0; i<m; i++){
            if(needs[cont[i]-1].size() > 0){
                ans[i] = needs[cont[i]-1].front();
                needs[cont[i]-1].pop();
            }
        }
        for(ll i=m-1; i>=0; i--){
            if(ans[i] == -1 and i < m-1){
                ans[i] = ans[i+1];
            }
            else if(here[cont[i]] != 0 and ans[i] == -1){
                ans[i] = here[cont[i]]-1;
            }
            else if(ans[i] == -1 and i == m-1){
                check = false;
            }
        }
        for(ll i=0; i<n; i++){
            while(!needs[i].empty()){
                needs[i].pop();
                check = false;
            }
        }
        if(!check){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for(ll i=0; i<m; i++){
                cout << ans[i]+1 << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
