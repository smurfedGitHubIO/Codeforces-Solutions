#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;
typedef pair<pll, ll> pl;

int main(){
	ll T;
	cin >> T;
	while(T--){
		ll n;
		cin >> n;
		pl A[n];
		for(ll i=0; i<n; i++){
			cin >> A[i].f.f >> A[i].f.s;
			A[i].s = i;
		}
		sort(A, A+n);
		ll ans[n];
		ll last = -1, cnt = 0;
		for(ll i=0; i<n; i++){
			if(i == 0){
				ans[A[i].s] = 1;
				last = A[i].f.s;
			}
			else if(A[i].f.f <= last){
				last = max(last, A[i].f.s);
				ans[A[i].s] = ans[A[i-1].s];
			}
			else{
				last = A[i].f.s;
				ans[A[i].s] = (ans[A[i-1].s] == 1 ? 2 : 1);
			}
			cnt += (ans[A[i].s] == 1 ? 1 : 0);
		}
		if(cnt == n){
			cout << "-1\n";
		}
		else{
			for(ll i=0; i<n; i++){
				cout << ans[i] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}