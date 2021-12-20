#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, ll> mcl;
		ll n = s.length();
		for(ll i=0; i<n; i++){
			mcl[s[i]] += 1;
		}
		ll mn = min(mcl['0'], mcl['1']);
		cout << (mn&1 ? "DA\n" : "NET\n");
	}
	return 0;
}