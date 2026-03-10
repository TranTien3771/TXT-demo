#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string6.INP", "r")){
        freopen("string6.INP", "r", stdin);
        freopen("string6.OUT", "w", stdout);
    }
    
    string s; cin >> s;
    string k = s;
    reverse(s.begin(), s.end());
    
    if (s == k){
    	cout << "YES";
	}
	else {
		cout << "NO";
	}
    
    return 0;
}

