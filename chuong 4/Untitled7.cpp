#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int s[n];
    int maxj = 0;
    bool check = true;
    for (int i = 1; i <= n; i++){
    	cin >> s[i];
	}
	for (int a = 1; a <= n; a++){
		for (int b = 1; b <= a; b++){
			if (s[b] < s[a]){
				maxj = b;
			}
			else {
				check = false;
			}
		}
		if (check == true){
			cout << maxj << " ";
		}
		else {
			cout << -1 << " ";
		}
	}
    return 0;
}
