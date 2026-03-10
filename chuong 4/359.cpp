#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x; cin >> n;
	int s[n];
    for (int i = 0; i < n; i++){
    	cin >> s[i];
	}
	cin >> x;
	int min_v = x;
	int	max_v = x;
	int cnt_min = 0;
	int cnt_max = 0;
	for (int i = 0; i < n; i++){
		if (s[i] < min_v){
			min_v = s[i];
			cnt_min++;
		}
		if (s[i] > max_v){
			max_v = s[i];
			cnt_max++;
		}
	}
	cout << cnt_min << " " << cnt_max;
    return 0;
}
