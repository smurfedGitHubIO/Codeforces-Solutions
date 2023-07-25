#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int ans1=0, ans2=0;
    for(int i=0; i<s.length()-1; i++){
        if(s[i] == 'B' and s[i+1] == 'A' and ans1 == 0){
            ans1 ++;
            i++;
        }
        else if(ans1 == 1 and s[i] == 'A' and s[i+1] == 'B'){
            cout << "YES";
            return 0;
        }
    }
    for(int i=0; i<s.length()-1; i++){
        if(ans2 == 0 and s[i] == 'A' and s[i+1] == 'B'){
            ans2 ++;
            i++;
        }
        else if(s[i] == 'B' and s[i+1] == 'A' and ans2 == 1){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}