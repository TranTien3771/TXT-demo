#include <bits/stdc++.h>

using namespace std;

int ln(int n){
	int ucln = -1e9;
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			ucln = max(ucln, __gcd(i, n - i));
			if (i != n/i){
				ucln = max(ucln, __gcd(n/i, n - n/i));
			}
		}	
	}
	return ucln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a; cin >> a;
    cout << ln(a);
    
    return 0;
}
