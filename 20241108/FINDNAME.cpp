#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("FINDNAME.INP", "r")){
        freopen("FINDNAME.INP", "r", stdin);
        freopen("FINDNAME.OUT", "w", stdout);
    }
    
    string s; cin >> s;
    string res = "";
    for (int i = 0; i < s.size(); i++){
    	if (s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i' || s[i] == 'y'){
    		res += s[i];
    		i++;
		}
		else {
			res += s[i];
		}
	}
	cout << res;

    return 0;
}

