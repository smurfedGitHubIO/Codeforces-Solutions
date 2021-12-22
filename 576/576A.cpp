#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll MAXN = 1e3 + 11;

vector<ll> primes;
vector<bool> isPrime(MAXN, true);
vector<ll> SPF(MAXN);

void sieve(){
	isPrime[0] = isPrime[1] = false;
	for(ll i=2; i<MAXN; i++){
		if(isPrime[i]){
			primes.emplace_back(i);
			SPF[i] = i;
		}
		for(ll j=0; j<primes.size() and primes[j]<=SPF[i] and i*primes[j] < MAXN; j++){
			isPrime[i*primes[j]] = 0;
			SPF[i*primes[j]] = primes[j];
		}
	}
}

int main(){
	ll n;
	cin >> n;
	sieve();
	vector<ll> ans;
	for(ll i=0; i<primes.size(); i++){
		ll q = primes[i];
		while(q <= n){
			ans.emplace_back(q);
			q *= primes[i];
		}
	}
	cout << ans.size() << "\n";
	for(ll i=0; i<ans.size(); i++){
		cout << ans[i] << " ";
	}
	return 0;
}