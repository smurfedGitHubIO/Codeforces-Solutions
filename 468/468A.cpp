#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin >> n;
	if(n <= 3){
		cout << "NO";
	}
	else{
		cout << "YES\n";
		if(n&1){
			cout << "4 + 1 = 5\n5 * 5 = 25\n3 - 2 = 1\n25 - 1 = 24\n";
			for(ll i=7; i<=n; i+=2){
				cout << i << " - " << i-1 << " = " << "1\n";
				cout << "24 * 1 = 24\n";
			}
		}
		else{
			cout << "4 * 3 = 12\n2 * 1 = 2\n12 * 2 = 24\n";
			for(ll i=6; i<=n; i+=2){
				cout << i << " - " << i-1 << " = " << "1\n";
				cout << "24 * 1 = 24\n";
			}
		}
	}
	return 0;
}