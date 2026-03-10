#include <bits/stdc++.h>

using namespace std;

vector<int> fibo;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen("arr7.inp", "r")){
    	freopen("arr7.inp", "r", stdin);
    	freopen("arr7.out", "w", stdout);
	}
    int x; cin >> x;
    int f1 = 1; 
    int f2 = 1;
    int fn = 0;
    while (fn <= x){
    	fn = f1 + f2;
    	f2 = f1;
    	f1 = fn;
    	fibo.push_back(fn);
	}
    	cout << x - fibo[fibo.size()-1];
    
    return 0;
}

