#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
const ll INF = 1e17;

int main(){
	ll n;
	cin >> n;
	map<string, ll> scores;
	ll mx = -INF;
	pair<string, ll> A[n];
	for(ll i=0; i<n; i++){
		cin >> A[i].f >> A[i].s;
		scores[A[i].f] += A[i].s;
	}
	for(auto x : scores){
		if(mx < x.second){
			mx = x.second;
		}
	}
	map<string, ll> scores2;
	for(ll i=0; i<n; i++){
		scores2[A[i].f] += A[i].s;
		if(scores2[A[i].f] >= mx and scores[A[i].f] == mx){
			cout << A[i].f;
			return 0;
		}
	}
	return 0;
}