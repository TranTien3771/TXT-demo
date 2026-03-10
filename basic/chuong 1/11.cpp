#include <bits/stdc++.h>

using namespace std;

const int maxp = 1e7 + 1;
bool check[maxp];

void nt(int l, int r){
	for (int i = 2; i <= r; i++){
		check[i] = true;
	}
	for (int i = 2; i <= sqrt(r); i++){
		if (check[i] == true){
			for (int j = i * i; j <= r; j += i){
				check[j] = false;
			}
		}
	}
	int cnt = 0;
	for (int i = l; i <= r; i++){
		if (check[i] == true){
			cnt++;
		}
	}
	cout << cnt << endl;
	for (int i = l; i <= r; i++){
		if (check[i] == true){
			cout << i << " ";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, r;
	cin >> l >> r;
	nt(l, r);
	return 0;
}

