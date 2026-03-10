#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("CHIAHET.INP", "r")){
    	freopen("CHIAHET.INP", "r", stdin);
    	freopen("CHIAHET.OUT", "w", stdout);
	}
	
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	cout << (b/x - (a-1)/x) + (b/y - (a-1)/y) - (b/(x*y/__gcd(x, y)) - (a-1)/(x*y/__gcd(x, y)));
    
    return 0;
}
