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
    char a[100], b[100], c[100];
    scanf("%[^\n]%*c", a);
    scanf("%[^\n]%*c", b);
    scanf("%[^\n]%*c", c);
    ll la = strlen(a);
    ll lb = strlen(b);
    ll lc = strlen(c);
    ll ca=0, cb=0, cc=0;
    for(ll i=0; i<la; i++){
        if(a[i] == 'a' or a[i] == 'e' or a[i] == 'i' or a[i] == 'o' or a[i] == 'u'){
            ca += 1;
        }
    }
    if(ca != 5){
        cout << "NO\n";
        return 0;
    }
    for(ll i=0; i<lb; i++){
        if(b[i] == 'a' or b[i] == 'e' or b[i] == 'i' or b[i] == 'o' or b[i] == 'u'){
            cb += 1;
        }
    }
    if(cb != 7){
        cout << "NO\n";
        return 0;
    }
    for(ll i=0; i<lc; i++){
        if(c[i] == 'a' or c[i] == 'e' or c[i] == 'i' or c[i] == 'o' or c[i] == 'u'){
            cc += 1;
        }
    }
    if(cc != 5){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    return 0;
}