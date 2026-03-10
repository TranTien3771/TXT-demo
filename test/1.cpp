#include <bits/stdc++.h>
#define int long long

using namespace std;

bool cp(int n){
	int k = sqrt(n);
	return (k*k == n);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }

	int n; cin >> n;
	
	int k = n*(n-2) + 1;
	
	if (cp(k)) cout << k;
	else cout << 1;

    return 0;
}


