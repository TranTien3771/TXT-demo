#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> m >> n;
    int matrix[m][n];
    for (int row = 0; row < m; row++){
		for (int col = 0; col < n; col++){
			cin >> matrix[row][col];
	}
	
    return 0;
}

