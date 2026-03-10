#include <bits/stdc++.h>
using namespace std;

string xoaTrangDuThua(const string &s) {
    string result;
    bool inWord = false;

    for (char c : s) {
        if (c != ' ') {
            result += c;
            inWord = true;
        } else if (inWord) { 
            result += ' ';
            inWord = false;
        }
    }

    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }

    return result;
}

int main() {
    string s;
    getline(cin, s);
    
    string result = xoaTrangDuThua(s);
    cout << result << endl;
    
    return 0;
}

