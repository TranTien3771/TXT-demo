#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen("arr7.inp", "r")){
    	freopen("arr7.inp", "r", stdin);
    	freopen("arr7.out", "w", stdout);
	}
    int n; cin >> n;
    vector<int> fibo;
    int f1 = 0;
    int f2 = 1;
    int fn = 0;
    for (int i = 1; i <= n; i++){
    	fn = f1 + f2;
    	fibo.push_back(fn);
    	f2 = f1;
    	f1 = fn;
	}
	int sum = 0;
    for (int i = fibo.size()-1; i >= 0; i++){
    	if (fibo[i] < n){
    		n -= fibo[i];
    		cout << fibo[i] << " ";
		}
	}
    return 0;
}
