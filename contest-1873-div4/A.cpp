// https://codeforces.com/contest/1873/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t; cin >> t;
    string op="abc";
	while(t--){
	    string s;
	    cin >> s;
	    string s1 = s;
	    string s2 = s;
	    string s3 = s;
	    swap(s1[0],s1[1]);
	    swap(s2[1],s2[2]);
	    swap(s3[0],s3[2]);
	   // cout << s << " "<< s1 << " " << s2 << " " << s3 << " ";
	    if(op==s1 || op==s2 || op==s3 || s==op)
	       cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}