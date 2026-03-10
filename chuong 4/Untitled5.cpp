#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b; cin >> a >> b;
    int s = 0;
    int c = 0;
    for (int i = a; i <= b; i++){
    	for (int j = 1; j < i; j++){
    		if (i%j==0){
    			s += j;
			}
		}
		if (s==i){
			cout << s << " "; 
		}
		else {
			c++;
		}
		s = 0;
	}
	if (c == (b-a)/1+1){
		cout << 0;
	}
    return 0;
}
