#include <bits/stdc++.h>
using namespace std;

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
    int a = 6;
    int b = 5;
    valSwap(a,b);
    cout << a << " " << b << "\n";
    refSwap(a,b);
    cout << a << " " << b << "\n";
	return 0;
}