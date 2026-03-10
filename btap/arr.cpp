#include <bits/stdc++.h>
#define int long long

using namespace std;

int maxn = 1e5 + 5;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("cpair.inp", "r", stdin);
	freopen("cpair.out", "w", stdout);
	int n; cin >> n;
	int a[maxn];
	int le = 0, chan = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (a[i] % 2 == 0){
			chan++;
		}
		else {
			le++;
		}
	}
	cout << le*(le - 1) / 2 + chan*(chan - 1) / 2;
	return 0;
}

