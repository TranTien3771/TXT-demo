#include <bits/stdc++.h>
#define int long long

using namespace std;

bool uoc(int n){
	if (n == 1) return 1;
	int sum = 1; 
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			sum += i;
			if (n / i != i){
				sum += n / i;
			}
		}
	}
	return sum < n;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("GEN.INP", "r")){
    	freopen("GEN.INP", "r", stdin);
    	freopen("GEN.OUT", "w", stdout);
	}
	
	int t; cin >> t;
	int n;
	int cnt = 0;
	for (int i = 1; i <= t; i++){
		cin >> n;
		if (uoc(n)){
			cnt++;
		}
	}
	cout << cnt;
    
    return 0;
}

