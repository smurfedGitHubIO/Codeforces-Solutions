#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll MAXN  = 2e5 + 11;
const ll INF = 1e17 + 1;

ll A[MAXN];

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		for(ll i=0; i<n; i++)
			cin >> A[i];
		sort(A, A+n);
		ll cur = 0, sub = 0;
		ll mx = -INF;
		for(ll i=0; i<n; i++){
			sub = A[i]-cur;
			cur += A[i]-cur;
			cout << sub << "\n";
			if(mx < sub)
				mx = sub;
		}
		cout << mx << "\n";
	}
	return 0;
}