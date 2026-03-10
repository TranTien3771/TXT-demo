#include <bits/stdc++.h>

using namespace std;

int maxn = 2e5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    
    vector<int> fre(100001, 0);
	vector<int> a(n);
    
    for (int i = 0 ; i < n; i++){
    	cin >> a[i];
    	fre[a[i]]++;
	}
	int max_fre = 0;
	int min_a = 1e9;
	for (int i = 0; i < n; i++){
		if (fre[a[i]] > max_fre){
			max_fre = fre[a[i]];
			min_a = a[i];
		}
		else if (max_fre == fre[a[i]]){
			min_a = min(min_a, a[i]);
		}
	}
	cout << min_a;
    
    return 0;
}
