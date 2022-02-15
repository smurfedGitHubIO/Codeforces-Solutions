#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

void solve(){
	ll n, s;
	cin >> n >> s;
	if(s == n-1 and n == 4){
		cout << "-1\n";
	}
	else if(s == n-1){
		vector<ll> sec;
		for(ll q=1;q < n; q*=2){
			sec.emplace_back(n-q-1);
		}
		ll j=1, q=1;
		for(ll i=0; i<sec.size(); i++){
			cout << q << " " << sec[j%sec.size()] << "\n";
			j++;
			q *= 2;
		}
		q=1;
		for(ll i=0; i<n/2; i++){
			if(i == q or n-i-1 == q){
				q *= 2;
			}
			else{
				cout << i << " " << n-1-i << "\n";
			}
		}
	}
	else{
		for(ll i=0; i<n/2; i++){
			if(n-i-1 == n-1){
				cout << s << " " << n-i-1 << "\n";
			}
			else if(n-1-i == s or i == s){
				cout << 0 << " " << n-s-1 << "\n";
			}
			else{
				cout << i << " " << n-1-i << "\n";
			}
		}
	}
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		solve();
	}
    return 0;
}