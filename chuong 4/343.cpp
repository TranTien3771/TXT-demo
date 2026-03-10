#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n; cin >> n;
    // p
    int p; cin >> p;
    int x[p];
    for (int i = 0; i < p; i++){
    	cin >> x[i];
	}
	
	// q
	int q; cin >> q;
	int y[p];
    for (int i = 0; i < q; i++){
    	cin >> y[i];
	}
	//
	bool check = false;
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < max(p, q); j++){
			if (x[j]==i||y[j]==i){
				check = true;
				break;
			}
			else {
				check = false;
			}
		}
	}
	if (check == true){
		cout << "WIN";
	}
	else {
		cout << "LOSE";
	}
	return 0;
}

