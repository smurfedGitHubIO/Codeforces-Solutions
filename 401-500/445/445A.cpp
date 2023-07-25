#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

bool issafe(ll i, ll j, ll n, ll m){
    return i >= 0 and j >= 0 and i < n and j < m;
}

ll xs[] = {-1, 1, 0 ,0};
ll ys[] = {0, 0, -1, 1};

int main(){
    ll n, m;
    cin >> n >> m;
    char c[n][m];
    bool vis[n][m];
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin >> c[i][j];
            vis[i][j] = 0;
        }
    }
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(c[i][j] == '.'){
                c[i][j] = 'B';
                vis[i][j] = 1;
                queue<pll> qpl;
                qpl.push(mp(i,j));
                while(!qpl.empty()){
                    pll fr = qpl.front();
                    qpl.pop();
                    for(ll k=0; k<4; k++){
                        ll x = fr.f+xs[k], y = fr.s+ys[k];
                        if(issafe(x,y,n,m) and c[x][y] == '.'){
                            if(c[fr.f][fr.s] == 'B'){
                                c[x][y] = 'W';
                            } else {
                                c[x][y] = 'B';
                            }
                            vis[x][y] = 1;
                            qpl.push(mp(x,y));
                        }
                    }
                }
            }
        }
    }
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cout << c[i][j];
        }
        cout << "\n";
    }
    return 0;
}