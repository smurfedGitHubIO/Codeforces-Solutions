#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll xs[] = {-1, 1, 0, 0, -1, -1 ,1 ,1};
ll ys[] = {0, 0, -1, 1, -1, 1, -1, 1};

bool issafe(ll x,ll y){
    return x >= 0 and y >= 0 and x < 3 and y < 3;
}

int main(){
    ll A[3][3] = {{1,1,1},{1,1,1}, {1,1,1}};
    ll b[3][3];
    for(ll i=0; i<3; i++){
        for(ll j=0; j<3; j++){
            cin >> b[i][j];
        }
    }
    for(ll i=0; i<3; i++){
        for(ll j=0; j<3; j++){
            if(b[i][j]&1){
                A[i][j] = 1-A[i][j];
                for(ll k=0; k<4; k++){
                    ll nx = i+xs[k], ny = j+ys[k];
                    if(issafe(nx, ny)){
                        A[nx][ny] = 1-A[nx][ny];
                    }
                }
            }
        }
    }
    for(ll i=0; i<3; i++){
        for(ll j=0; j<3; j++){
            cout << A[i][j];
        }
        cout << "\n";
    }
    return 0;
}