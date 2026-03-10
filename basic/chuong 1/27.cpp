#include <bits/stdc++.h>

using namespace std;

vector<int> check(10000, 0);
int cur = 1;

int rorang(int x){
	while (x != 1){
		int sum = 0;
		while (x > 0){
			int y = x % 10;
			sum += (y*y);
			x /= 10;
		}
		x = sum;
		if (check[x] == cur){
			return 0;
		}
		check[x] = cur;
	}
	return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++){
    	if (rorang(i) == 1){
    		cnt++;
		}
		cur++;
	}
	cout << cnt;
    
    return 0;
}

