#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> s(n);
    for (int a = 0; a < n; a++){
    	cin >> s[a];
	}
	sort(s.begin(), s.end());
	vector<int> s1;
	for (int i = 0; i < n; i++){
		bool check = true;
		for (int j = i; j < n; j++){
			if (s[j]==s[i]){
				check = false;
				break;
			}
			else {
				s1.push_back(s[i]);
			}
		}
	}
	for (int b = 0; b < s.size(); b++){
		cout << s[b] << " ";
	}
    return 0;
}
