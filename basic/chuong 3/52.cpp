#include <bits/stdc++.h>

using namespace std;

int a[100005];
vector<int> check(100005, 0);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
	
	vector<pair<int, int>> s;
	
	for (int i = 1; i <= n; i++){
		s.push_back({a[i], i});
	}
	
	sort(s.begin(), s.end());
	
	int cnt = 0;
	int res = 0;
	for (auto [v, p] : s){
		if (cnt >= n) break;
		if (check[p]) continue;
		
		check[p] = 1;
		cnt++;
		
		if (p > 1 && check[p-1] == 0) {
			check[p-1] = 1; cnt++;
		}
		if (p < n && check[p+1] == 0) {
			check[p+1] = 1; cnt++;
		}
		res++;
	}
	cout << res;
	
    return 0;
}

