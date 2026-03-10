#include <bits/stdc++.h>
#define int long long

using namespace std;

int v[1003];

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
    	cin >> v[i];
	}
	int max_2v = -1e9;
	int p_2v = 0;
	int max2 = 0;
	int p_2v1 = 0;
	int max_3v = -1e9;
	int p_3v = 0;
	for (int i = 1; i < n; i++){
		if (v[i] * v[i + 1] > max_2v){
			max2 = max_2v;
			max_2v = v[i] * v[i + 1];
			p_2v1 = p_2v;
			p_2v = i; 
		}
		else if (v[i] * v[i + 1] <= max_2v && v[i] * v[i+1] > max2){
			max2 = v[i] * v[i + 1];
			p_2v1 = i;
		}
	}
    for (int i = 1; i < n - 1; i++){
    	if (v[i] * v[i + 1] * v[i + 2] > max_3v){
    		max_3v = v[i] * v[i+1] * v[i+2];
    		p_3v = i;
		}
	}
	if (max_3v > max2 + max_2v){
		int sum = 0;
		sum += max_3v;
		for (int i = 1; i <=n; i++){
			if (i != p_3v && i != p_3v + 1 && i != p_3v + 2){
				sum += v[i];
			}
		}
		cout << sum;
	}
	else if (max2 + max_2v > max_3v) {
		int sum = 0;
		sum += (max2 + max_2v);
		for (int i = 1; i <= n; i++){
			if (i != p_2v && i != p_2v + 1 && i != p_2v1 && i != p_2v1 + 1){
				sum += v[i];
			}
		}
		cout << sum;
	}
	
    return 0;
}
