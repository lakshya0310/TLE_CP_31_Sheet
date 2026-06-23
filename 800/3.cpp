#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
         int n;
    cin >> n;
    string s;
    cin >> s;
    
    if (s.find("...") != string::npos) {
        cout << 2 << "\n";
    } else {
    
        int empty_count = 0;
        for (char c : s) {
            if (c == '.') {
                empty_count++;
            }
        }
        cout << empty_count << "\n";
    }
    }
    
    return 0;
}