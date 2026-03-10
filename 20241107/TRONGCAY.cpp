#include <bits/stdc++.h>

using namespace std;

int a[1000005];
vector<int> nt;

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
    
    if (fopen("TRONGCAY.INP", "r")){
        freopen("TRONGCAY.INP", "r", stdin);
        freopen("TRONGCAY.OUT", "w", stdout);
    }
    
    int n; cin >> n;
    for (int i = 0; i < n; i++){
    	cin >> a[i];
    	if (check(a[i]) == true){
    		nt.push_back(a[i]);
		}
	}
	sort(nt.begin(), nt.end());
	if (nt.size() == 0){
		cout << -1;
	}
	else if (nt.size() % 2 != 0) {
		for (int i = 0; i < nt.size(); i++){
			if (i % 2 != 0){
				cout << nt[i] << " ";
			}
		}
		for (int i = nt.size() - 1; i >= 0; i--){
			if (i % 2 == 0){
				cout << nt[i] << " ";
			}
		}
	}
	else {
		for (int i = 0; i < nt.size(); i++){
			if (i % 2 == 0){
				cout << nt[i] << " ";
			}
		}
		for (int i = nt.size() - 1; i >= 0; i--){
			if (i % 2 != 0){
				cout << nt[i] << " ";
			}
		}		
	}
    
    return 0;
}

