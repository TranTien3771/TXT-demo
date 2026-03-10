#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string11.INP", "r")){
        freopen("string11.INP", "r", stdin);
        freopen("string11.OUT", "w", stdout);
    }
    
    string s; cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < s.size(); i++){
    	if (s[i] == '('){
    		cnt1++;
		}
		else {
			cnt2++;
		}
	}
	if (s[0] == ')'){
		cout << "NO" << endl << 0;
	}
	else if (cnt1 >= cnt2 ){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
   	
    return 0;
}

