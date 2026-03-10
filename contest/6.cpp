#include<bits/stdc++.h>

using namespace std;

int bruh(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    
    int dcm = 0;
    for (int x = max(1, n-81); x <= n; x++) {
        if(x + bruh(x) == n){
            dcm++;
        }
    }
    cout << dcm << endl;
    return 0;
}
