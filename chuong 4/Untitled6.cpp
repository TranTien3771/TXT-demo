#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
    int n; cin >> n;
    int a[n];
    int s = 0;
    for (int i = 0; i < n; i++){
    	cin >> a[i];
	}
	for (int k = 1; k <= n; k++){
		for (int l = k+1; l <= n; l++){
			if (a[k] < a[l]){
				s++;
			}
		}
	}
	cout << s;
    return 0;
}

