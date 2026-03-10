#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n; cin >> m >> n;
	int s[m][n];
	for (int i = 0; i < m; i++){	
		for (int j = 0 ; j < n; j++){
			cin >> s[i][j];
		}
	}
	vector<int> s1;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			s1.push_back(s[i][j]);
		}
	}
	sort(s1.begin(), s1.end());
	int p = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			s[i][j] = s1[p++];
		}
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
