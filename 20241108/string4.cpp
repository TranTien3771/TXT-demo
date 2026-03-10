#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string4.INP", "r")){
        freopen("string4.INP", "r", stdin);
        freopen("string4.OUT", "w", stdout);
    }
    
    string s; getline(cin, s);
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
    	if (s[i] == 'a'){
    		cout << i << " ";
    		cnt++;
		}
	}
	cout << endl << cnt;
    
    return 0;
}

