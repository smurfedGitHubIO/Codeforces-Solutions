#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
using namespace std;

typedef long long int ll;

const ll MAXN = 2e5 + 11;

pair<char, ll> A[MAXN];
ll p[MAXN];

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		for(ll i=0; i<n; i++)
			cin >> p[i];
		string s;
		cin >> s;
		for(ll i=0; i<n; i++)
			A[i] = mp(s[i], p[i]);
		sort(A, A+n);
		bool check = true;
		for(ll i=0; i<n; i++){
			if(A[i].f == 'B' and A[i].s >= i+1)
				continue;
			else if(A[i].f == 'R' and A[i].s <= i+1)
				continue;
			else{
				check = false;
				break;
			}
		}
		cout << (check ? "YES\n" : "NO\n");
	}
	return 0;
}