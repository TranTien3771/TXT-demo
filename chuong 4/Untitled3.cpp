#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a; cin >> a;
	int x;
	for (int i = 1; i<= a; i++){
		cin >> x;
		for (int i = 23; i>=1; i--){
			if (i == x){
				cout << (char)(24-i+96);
			}
		}
		if (x==24){
			cout << "z";
		}
		else if (x==25){
			cout << "y";
		}
		else if (x==26){
			cout << "x";
		}
		if (x==27){
			cout << " ";
		}
	}
    return 0;
}

