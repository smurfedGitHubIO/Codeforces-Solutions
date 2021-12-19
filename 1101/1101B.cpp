#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	string s;
	cin >> s;
	ll n = s.length();
	ll l = -1, r = -1;
	ll sl = -1, sr = -1;
	ll cnt = 0;
	for(ll i=0; i<n; i++){
		if(s[i] == '[' and l == -1){
			l = i;
		}
		else if(s[i] == ':' and l != -1){
			sl = i;
			break;
		}
	}
	for(ll i=n-1; i >= 0; i--){
		if(s[i] == ']' and r == -1){
			r = i;
		}
		else if(s[i] == ':' and r != -1){
			sr = i;
			break;
		}
	}
	for(ll i=sl; i<=sr; i++){
		if(s[i] == '|'){
			cnt += 1;
		}
	}
	if(sl >= sr or sl == -1 or sr == -1){
		cout << -1;
	}
	else{
		cout << cnt + 4;
	}
	return 0;
}