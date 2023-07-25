#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	ll A[n];
	map<ll, ll> cnt;
	for(ll i=0; i<n; i++){
		cin >> A[i];
	}
	ll ans = 0, last = 0;
	sort(A, A+n);
	for(ll i=0; i<n; i++){
	    cnt[A[i]] += 1;
		if(i == 0){
			continue;
		}
		else{
			ll q = last+A[i], p = 2;
			while(p <= A[i]){
				p *= 2;
			}
			while(p <= A[i]*2){
			    if(A[i] == p-A[i]){
			        ans -= 1;
			    }
				ans += cnt[p-A[i]];
				p *= 2;
			}
		}
		last = A[i];
	}
	cout << ans;
	return 0;
}