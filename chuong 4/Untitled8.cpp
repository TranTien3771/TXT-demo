#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen("TAMGIAC.INP", "r")){
    	freopen("TAMGIAC.INP", "r", stdin);
    	freopen("TAMGIAC.OUT", "w", stdout);
	}
	int t; cin >> t;
	int a, b, c;
	for (int i = 1; i <= t; i++){
		cin >> a >> b >> c;
		if (a+b+c != 180){
			cout << 0 << endl;
		}
		else if (a==0 || b==0 || c==0){
			cout << 0 << endl;
		}
		else {
			if (a==90 || b==90 || c==90){
				cout << "VUONG" << endl;
			}
			else if (a < 90 && b < 90 && c < 90){
				cout << "NHON" << endl;
			}
			else {
				cout << "TU" << endl;
			}
		}
	}
    return 0;
}
