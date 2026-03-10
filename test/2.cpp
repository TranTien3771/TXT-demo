#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }
	
	int n; cin >> n;
	vector<int> a(n);
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a.begin(), a.end());
	
	int res1 = max(a[0] * a[1] * a[n-1], max(a[n-1] * a[n-2] * a[n-3], a[n-1] * a[0] * a[1]));
	int res2 = max(a[0] * a[1], max(a[n-1] * a[n-2], a[0] * a[n-1]));
	cout << max(res1, res2);
		
    return 0;
}


