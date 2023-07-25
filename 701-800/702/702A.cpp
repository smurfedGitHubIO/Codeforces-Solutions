#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	ll ans = 0, lowest = -1, cur=0;
	ll A[n];
	for(ll i=0; i<n; i++){
		cin >> A[i];
		if(lowest == -1){
			lowest = i;
			cur += 1;
		}
		else if(A[i] > A[i-1]){
			cur += 1;
		}
		else{
			lowest = i;
			cur = 1;
		}
		ans = max(cur,ans);
	}
	cout << ans;
	return 0;
}