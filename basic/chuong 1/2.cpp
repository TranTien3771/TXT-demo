#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, d; cin >> n >> d;
	int v[n];
	float m[n];
	int cnt = 0;
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	for (int i = 0; i < n; i++){
		m[i] = i;
	}
	for (int i = 0; i < n; i++){
		m[i] += (float)d / v[i];
		for (int j = 0; j < i; j++){
			if (m[j] > m[i]){
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}

