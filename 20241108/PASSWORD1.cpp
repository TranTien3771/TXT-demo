#include <bits/stdc++.h>

using namespace std;

bool check(int n){
	if (n < 2) return false;
	else if (n == 2) return true;
	else if (n % 2 == 0) return false;
	else {
		for (int i = 3; i <= sqrt(n); i+=2){
			if (n % i == 0) return false;
		}
	}
	return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("PASSWORD1.INP", "r")){
        freopen("PASSWORD1.INP", "r", stdin);
        freopen("PASSWORD1.OUT", "w", stdout);
    }
    
    string s; cin >> s;
    int maxx = -1e9;
    for (int i = 0; i < s.size(); i++){
    	string so = "";
    	for (int j = i; j < s.size(); j++){
    		if (isdigit(s[j])){
    			so += s[j];
    			int n = stoi(so);
    			if (check(n)){
    				maxx = max(maxx, n);
				}
			} 	
			else {
				break;
			}	
		}
	}
	cout << maxx;
    

    return 0;
}

