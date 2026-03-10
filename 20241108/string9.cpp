#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if (fopen("string9.INP", "r")){
        freopen("string9.INP", "r", stdin);
        freopen("string9.OUT", "w", stdout);
    }
    string S;
    getline(cin, S);  

    bool letters[26] = {false};
    bool numbers[10] = {false};

    for (int i = 0; i < S.length(); i++) {
        char ch = S[i];
        if (ch >= 97 && ch <= 122) { 
            int pos = ch - 97;
            letters[pos] = true; 
        }
        else if (ch >= 65 && ch <= 90) { 
            int pos = ch - 65;
            letters[pos] = true; 
        }
        else if (ch >= 48 && ch <= 57) { 
            int pos = ch - 48;
            numbers[pos] = true;
        }
    }

    int num_letters = 0;
    for (int i = 0; i < 26; i++) {
        if (letters[i]) {
            num_letters++;
        }
    }

    int num_numbers = 0;
    for (int i = 0; i < 10; i++) {
        if (numbers[i]) {
            num_numbers++;
        }
    }

    cout << num_letters + num_numbers << endl;
    
    return 0;
}

