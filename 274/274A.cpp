#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n, m;
	cin >> n >> m;
	if(m == 1){
		cout << n;
		return 0;
	}
	set<ll> stl;
	ll A[n];
	for(ll i=0; i<n; i++){
		cin >> A[i];
		stl.insert(A[i]);
	}
	sort(A, A+n);
	ll ans = 0;
	for(ll i=0; i<n; i++){
		if(stl.find(A[i]) != stl.end()){
			ll q = A[i], cur = 0;
			while(q <= A[n-1]){
				if(stl.find(q) != stl.end()){
					cur ++;
					stl.erase(q);
				}
				else{
				    break;
				}
				q*=m;
			}
			ans += cur/2 + (cur&1);
		}
	}
	cout << ans;
	return 0;
}