#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> t){
	for (int i = 1; i < t.size(); i++){
		if (t[i] <= t[i-1]){
			return false;
		}
	}
	return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//    if (fopen(".INP", "r")){
//        freopen(".INP", "r", stdin);
//        freopen(".OUT", "w", stdout);
//    }

	int n; cin >> n;
	vector<int> t(n);
	for (int i = 0; i < n; i++){
		cin >> t[i];
	}
	
	int cnt = 0;
	while (check(t) == false){
		vector<int> res;
		res.push_back(t[0]);
		for (int i = 1; i < t.size(); i++){
			if (t[i] > t[i-1]){
				res.push_back(t[i]);
			}
		}
		t = res;
		cnt++;
	}
	cout << cnt;

    return 0;
}

