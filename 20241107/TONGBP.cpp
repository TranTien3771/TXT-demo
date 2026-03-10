#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("TONGBP.INP", "r")){
    	freopen("TONGBP.INP", "r", stdin);
    	freopen("TONGBP.OUT", "w", stdout);
	}
	
	int t;
	cin >> t;
	int n;
	for (int i = 1; i <= t; i++){
		cin >> n;
		cout << (long long)n*(n+1)*(2*n+1)/6 << '\n';
	}
    
    return 0;
}
