#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 1e5 + 11;
const ll INF = 1e17 + 11;

vector<ll> dp(MAXN, -1);

map<ll, ll> cnt;
vector<ll> vl;

ll solve(ll i){
	if(i < 0){
		return 0;
	}
	if(dp[i] != -1){
		return dp[i];
	}
	ll left = -INF, right = -INF;
	if(vl[i]-1 == vl[i-1]){
		left = vl[i]*cnt[vl[i]]+solve(i-2);
		right = solve(i-1);
	}
	else{
		left = vl[i]*cnt[vl[i]]+solve(i-1);
	}
	dp[i] = max(left,right);
	return dp[i];
}

int main(){
	ll n;
	cin >> n;
	ll A[n];
	for(ll i=0; i<n; i++){
		cin >> A[i];
		cnt[A[i]] += 1;
		if(cnt[A[i]] == 1){
			vl.emplace_back(A[i]);
		}
	}
	sort(begin(vl),end(vl));
	ll ans = solve(vl.size()-1);
	cout << ans;
	return 0;
}