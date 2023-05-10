#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout); 
    #endif
} 

void valSwap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}


void refSwap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    init_code();

    int a = 6;
    int b = 5;
    valSwap(a,b);
    cout << a << " " << b << "\n";
    refSwap(a,b);
    cout << a << " " << b << "\n";
	return 0;
}