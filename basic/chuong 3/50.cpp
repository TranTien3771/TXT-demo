#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }

	int n, m; cin >> n >> m;
	vector<int> d(n);
	vector<int> v(m);
	long long sum = 0;
	
	for (int i = 0; i < n; i++){
		cin >> d[i];
	}
	for (int i = 0; i < m; i++){
		cin >> v[i];
	}
	
	sort(d.rbegin(), d.rend());
	sort(v.begin(), v.end());
	
	for (int i = 0; i < d.size(); i++){
		sum += v[i]*d[i];
	}
	cout << sum;

    return 0;
}


