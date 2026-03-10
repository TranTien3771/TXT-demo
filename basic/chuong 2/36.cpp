#include <bits/stdc++.h>

using namespace std;

const int maxx = 1e5;
bool check[maxx];
vector<int> nt;

void sangnt(){
	for (int i = 2; i <= maxx; i++){
		check[i] = true;
	}
	for (int i = 2; i <= sqrt(maxx); i++){
		if (check[i] == true){
			for (int j = i*i; j <= maxx; j += i){
				check[j] = false;
			}
		}
	}
	for (int i = 2; i <= maxx; i++){
		if (check[i] == true) nt.push_back(i);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
    	cin >> a[i];
	}
	
	sangnt();
	int max_len = 0;
	int cnt = 0;
	int fre = 1;
	
	for (int i = 0; i < n; i++){
		if (find(nt.begin(), nt.end(), a[i]) != nt.end()){
			cnt++;
		}
		else {
			if (cnt == max_len){
				fre++;
			}
			else if (cnt > max_len){
				max_len = cnt;
				fre = 1;
			}
			cnt = 0;
		}
	}
	
	if (cnt == max_len){
		fre++;
	}
	else if (cnt > max_len){
		max_len = cnt;
		fre = 1;
	}
	
	cout << fre << " " << max_len;
    
    return 0;
}
