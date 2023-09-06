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
    string s, t;
    cin >> s >> t;
    if(s.length() != t.length()){
        cout << "NO";
        return 0;
    }else{
        for(ll i=0; i<s.length(); i++){
            if(s[i] == t[i]){
                if(s[i+1] == t[i+1]){
                    i+=1;
                }
                continue;
            }else{
                if(i == s.length()-1){
                    if(s[i] != t[i]){

                    }
                }
                if(s[i] == '1' and s[i+1] == '1' and t[i] != t[i+1]){
                    s[i+1] = t[i+1];
                }else if(s[i] != s[i+1] and t[i] == '1' and t[i+1] == '1'){
                    s[i+1] = t[i+1];
                }else if(t[i] == '0' and t[i+1] == '0' and s[i] == '0' and s[i+1] == '0'){
                    continue;
                }else{
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
    return 0;
}