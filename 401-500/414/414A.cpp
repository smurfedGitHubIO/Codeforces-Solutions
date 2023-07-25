#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, m;
	cin >> n >> m;
	if(n/2 > m or (n == 1 and m != 0)){
		cout << -1;
	}
	else if(n == 1 and m == 0){
		cout << 1;
	}
	else{
		ll e = n/2;
		ll d;
		if(m > e){
			d = m-e+1;
		}
		else{
			d = 1;
		}
		vector<ll> vl;
		vl.emplace_back(d);
		vl.emplace_back(2*d);
		ll sc = 2*d+1;
		for(ll i=0; i<e - (m > e ? 0 : 1); i++){
			vl.emplace_back(sc);
			vl.emplace_back(sc+1);
			sc+=2;
		}
		if(n&1){
			vl.emplace_back(sc);
		}
		for(ll i=0; i<n; i++){
			cout << vl[i] << " ";
		}
	}
	return 0;
}