#include <bits/stdc++.h>

using namespace std;

int min_m(int a, int b, int c){
	int m = 0;
	for (int i = 0; i <= c; i++){
		if ((a + b + i) % c == 0){
			m = i;
			break;
		}
	}
	return m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;
    cin >> a >> b >> c;
    cout << min_m(a, b, c);
    
    
    return 0;
}
