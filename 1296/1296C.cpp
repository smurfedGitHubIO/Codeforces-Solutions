#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

const ll adjust = 2e5 + 11;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		string s;
		cin >> s;
		map<pair<ll,ll>, ll> mpl;
		ll frst = -1, lst = -1;
		ll x = 0, y = 0;
		mpl[{x,y}] = 1;
		for(ll i=0; i<n; i++){
			y += (s[i] == 'U' ? 1 : (s[i] == 'D' ? -1 : 0));
			x += (s[i] == 'R' ? 1 : (s[i] == 'L' ? -1 : 0));
			if(mpl[{x,y}] != 0){
				if(frst == -1 and lst == -1){
					frst = mpl[{x,y}]+1;
					lst = i+2;
				}
				else if(i-mpl[{x,y}]-2 < lst-frst-4){
					frst = mpl[{x,y}]+1;
					lst = i+2;
				}
			}
			mpl[{x,y}] = i+2;
		}
		if(frst == -1){
			cout << "-1\n";
		}
		else{
			cout << frst-1 << " " << lst-1 << "\n";
		}
	}
	return 0;
}