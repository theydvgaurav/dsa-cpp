#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n; cin >> n;
    ll a[n];
    
    for(ll i=0; i < n; i++){
        cin >> a[i];
    }
    ll mx = a[0];
    ll res = 0;

    for(ll i=1;i<n;i++){
        if (a[i]>mx){
            mx = a[i];
        }
        else{
            res+=abs(mx-a[i]);
        }
    }
    cout << res;
    return 0;
}