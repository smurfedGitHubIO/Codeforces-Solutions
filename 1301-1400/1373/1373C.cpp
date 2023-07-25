#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll solve(ll x){
	return (x*(x+1))/2;
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll ans = 0, cur = 0;
		map<ll, ll> mpl;
		ll n = s.length(), last = 0;
		for(ll i=0; i<n; i++){
			ans++;
			if(s[i] == '-'){
				cur -= 1;
			}
			else{
				cur += 1;
			}
			if(mpl[cur] == 0 and cur < 0){
				last = abs(cur);
				ans += i+1;
			}
			mpl[cur] = 1;
		}
		cout << ans << "\n";
	}
	return 0;
}