#include <bits/stdc++.h>

using namespace std;

int main() {
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
	
	long long s = max(a[n-1] * a[n-2] * a[n-3], a[n-1] * a[0] * a[1]);
	cout << s;
	
    return 0;
}


