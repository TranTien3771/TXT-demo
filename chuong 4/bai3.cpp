#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen("DIV10.INP", "r")){
    	freopen("DIV10.INP", "r", stdin);
    	freopen("DIV10.OUT", "w", stdout);
	}
	long long n; cin >> n;
	for (int i = 1; i <= 10; i++){
		if (i*n % 10 == 0){
			cout << i;
			break;
		}
	}
    return 0;
}
