#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int x, y;
    for (int i = 1; i <= n; i++) {
    	cin >> x >> y;
	    int d = y - x;
	    int n = sqrt(d);
	
	    if (n * n == d){
	    	cout << 2 * n - 1 << "\n";
		}
		else {
			cout << 2 * n + (d-n*n)/n - ((d-n*n)%n==0) << "\n";
		}
    }

    return 0;
}

