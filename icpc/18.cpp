#include <bits/stdc++.h>

using namespace std;

int maxx = 1e6 + 1;
bool check[maxx];

int mp[maxx];

void snt(int n){
	for (int i = 2; i <= n; i++){
		if (mp[i] == 0){
			for (int j = i*i; j <= n; j += i){
				if (mp[j] != 0){
					mp[j] = i;
				}
			}
		}
	}
	for (int i = 2; i <= n; i++){
		if (mp[i] == 0){
			mp[i] = i;
		}
	}
}

int 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	
    
    return 0;
}
