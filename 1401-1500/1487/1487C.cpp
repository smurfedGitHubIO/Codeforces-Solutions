#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll q = (((n-1)*3)/2);
        ll threes = q/3, ones = q%3, zeroes = (n-1)-threes-ones;
        ll A[n][3];
        for(ll i=0; i<n; i++){
            A[i][0] = threes, A[i][1] = ones, A[i][2] = zeroes;
        }
        for(ll i=0; i<n; i++){
            if(i == 0){
                for(ll j=i+1; j<n; j++){
                    if(A[i][0] != 0){
                        A[i][0] -= 1;
                        A[j][2] -= 1;
                        cout << "1 ";
                    }
                    else if(A[i][1] != 0){
                        A[i][1] -= 1;
                        A[j][1] -= 1;
                        cout << "0 ";
                    }
                    else{
                        A[i][2] -= 1;
                        A[j][0] -= 1;
                        cout << "-1 ";
                    }
                }
            }
            else{
                for(ll j=i+1; j<n; j++){
                    if(A[i][0] != 0 and A[j][2] != 0){
                        A[i][0] -= 1;
                        A[j][2] -= 1;
                        cout << "1 ";
                    }
                    else if(A[i][1] != 0 and A[j][1] != 0){
                        A[i][1] -= 1;
                        A[j][1] -= 1;
                        cout << "0 ";
                    }
                    else{
                        A[i][2] -= 1;
                        A[j][0] -= 1;
                        cout << "-1 ";
                    }
                }
            }
        }
        cout << "\n";
    }
}