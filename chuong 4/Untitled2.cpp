#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a; cin >> a;
	int b, c;
	double s = 0;
	for (int i = 1; i <= a; i++){
		cin >> b >> c;
		s += sqrt(b*b + c*c);
	}	
	cout << fixed << setprecision(6) << s;
    return 0;
}

