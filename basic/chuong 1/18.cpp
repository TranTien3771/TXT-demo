#include<bits/stdc++.h>

using namespace std;

vector<int> a;

void cnt(int n) {
    int i = 2;
    while(n > 1) {
        if(n % i == 0) {
        	n /= i;
	        if(find(a.begin(), a.end(), i) == a.end()) {
	            a.push_back(i);
	        }
        }
        else {
        	i++;
    	}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n, p;
    cin >> n >> p;
    cnt(p);
    int s = 1e9;
    for(int i = 0; i < a.size(); i++) {
        int e = 0;
        int b = 0;
        int c = n;
        while(p % a[i] == 0) {
            p /= a[i];
            e++;
        }
        while(c != 0) {
            b += c / a[i];
            c /= a[i];
        }
        s = min(b / e, s);
    }
    cout << s;
    
    return 0;
}
