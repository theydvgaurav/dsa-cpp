#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    string s; cin >> s;
    ll mx = 1;
    ll cnt = 1;
    
    for(ll i=0; i < s.size()-1; i++){
        if(s[i]==s[i+1]){
            cnt++;
            mx = max(mx,cnt);
        }
        else{
            mx = max(mx,cnt);
            cnt = 1;
        }
    }
    cout << mx;
	
	return 0;
}