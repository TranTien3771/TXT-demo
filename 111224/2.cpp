#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }
	
	int n;
	cin >> n;
	
	vector<pair<int, string>> a(n+5);
	
	for (int i = 1; i <= n; i++){
		cin >> a[i].first;
	}
	for (int i = 1; i <= n; i++){
		cin >> a[i].second;
	}
	
	for (int i = 1; i <= n; i++){
		cout << a[a[a[a[i].first].first].first].second << '\n';
	}

    return 0;
}


