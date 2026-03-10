#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b, c, d; 
	cin >> a >> b >> c >> d;
	long long e = d*a - c*b;
	long long f = b*d;
	long long g = e / __gcd(e,f);
	long long h = f / __gcd(e,f);
	if (h < 0){
		cout << g * -1 << " " << abs(h);
	}
	else {
		cout << g << " " << h;
	}
	return 0;
}

