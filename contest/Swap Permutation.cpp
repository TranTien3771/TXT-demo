#include <bits/stdc++.h>

using namespace std;

int a[50];
int x[50];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        x[i] = a[i];
    }
    
    sort(a, a + n);
    
    int cnt = 0;
    for (int i = 0; i < n; i++){
    	if (x[i] != a[i]){
    		cnt++;
		}
	}
	
	if (cnt <= 2){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
    
    return 0;
}

