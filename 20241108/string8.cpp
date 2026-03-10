#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string8.INP", "r")){
        freopen("string8.INP", "r", stdin);
        freopen("string8.OUT", "w", stdout);
    }
    
	string a; cin >> a;
	string b; cin >> b;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	if (a == b){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
    
    return 0;
}

