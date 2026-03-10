#include <bits/stdc++.h>
#define int long long

using namespace std;

vector<int> x(30005);

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }

	int n, k; 
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> x[i];
	}
	sort(x.begin(), x.end());
	int cnt = 0;
	int res = 0;
	int i = 0;
	while (res + x[i] <= k){
		if (x[i] > 0){
			res += x[i];
			cnt++;			
		}
		i++;
	}
	cout << cnt;
	
    return 0;
}


