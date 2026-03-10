#include <bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k; cin >> k;
	int cnt = 0;
	for (int i = 1; i <= k; i++){
		string s = to_string(i);
		string k = s;
		reverse(s.begin(), s.end());
		int a = stoi(s); 
		int b = stoi(k);
		if (__gcd(a, b) == 1){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}
