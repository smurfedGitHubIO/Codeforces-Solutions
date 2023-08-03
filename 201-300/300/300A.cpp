#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin >> n;
    ll A[n];
    ll a=0, b=0;
    for(ll i=0; i<n; i++){
        cin >> A[i];
        a+=(A[i] < 0);
        b+=(A[i] > 0);
    }
    sort(A, A+n);
    if(a >= 3){
        cout << "1 " << A[0] << "\n";
        cout << n-3 << " ";
        for(ll i=3; i<n; i++){
            cout << A[i];
            if(i == n-1){
                cout << "\n";
            }else{
                cout << " ";
            }
        }
        cout << "2 " << A[1] << " " << A[2];
    }else{
        cout << "1 " << A[0] << "\n";
        cout << n-2 << " ";
        for(ll i=1; i<n-1; i++){
            cout << A[i];
            if(i == n-2){
                cout << "\n";
            }else{
                cout << " ";
            }
        }
        cout << "1 " << A[n-1];
    }
    return 0;
}