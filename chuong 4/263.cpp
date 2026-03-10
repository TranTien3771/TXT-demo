#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    int a; cin >> a;
    int b, c;
    for (int i = 1; i <= a; i++){
    	cin >> b >> c;
    	for (int j = b-1; j <= c-1; j++){
			s = s[j] + s;
			cout << s << endl;
		}
	}
	cout << s;
    return 0;
}
