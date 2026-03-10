#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("SOCOLA.INP", "r")){
        freopen("SOCOLA.INP", "r", stdin);
        freopen("SOCOLA.OUT", "w", stdout);
    }
    
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
    	if (s[i] == 'O'){
    		cnt++;
		}
	}
	if (cnt == 0){
		cout << 1;
	}
	else {
		cout << cnt * cnt;
	}

    return 0;
}

