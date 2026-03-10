#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string10.INP", "r")){
        freopen("string10.INP", "r", stdin);
        freopen("string10.OUT", "w", stdout);
    }
    string c; cin >> c;
    string s = "";
    for (int i = 0; i < c.size(); i++){
    	for (char j = '0'; j <= '9'; j++){
    		if (c[i] == j){
    			s += j;
			}
		}
	}
	cout << s;
   	
    return 0;
}

