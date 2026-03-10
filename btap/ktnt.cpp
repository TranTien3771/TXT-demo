#include <bits/stdc++.h>

using namespace std;

bool nt(int n){
	if (n < 2){
		return false;
	}
	else {
		for (int i = 2; i <= sqrt(n); i ++){
			if (n % i == 0){
				return false;
			}
		}
	}
	return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("KTNT.INP", "r")){
    	freopen("KTNT.INP", "r", stdin);
    	freopen("KTNT.OUT", "w", stdout);
	}
	
	int q; cin >> q;
	int n;
	for (int i = 1; i <= q; i++){
		cin >> n;
		if (nt(n) == true){
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
    
    return 0;
}
