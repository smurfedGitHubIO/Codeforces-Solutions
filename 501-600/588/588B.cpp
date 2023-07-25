#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MAXN = 1e6 + 11;

vector<bool> isprime(MAXN, true);
vector<ll> primes;
ll n;

void init(){
  ll ans = 1;
  isprime[0] = isprime[1] = false;
  for(ll i=2; i<MAXN; i++){
    if(isprime[i]){
      if(n%i == 0){
        ans *= i;
        while(n%i == 0){
          n /= i;
        }
      }
      primes.emplace_back(i);
    }
    for(ll j=0; j<primes.size() and i*primes[j] < MAXN; j++){
      isprime[i*primes[j]] = false;
    }
  }
  cout << ans*n;
}

int main(){
  cin >> n;
  init();
  return 0;
}