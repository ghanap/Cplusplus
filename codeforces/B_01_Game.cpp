#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int zeros = 0;
    int ones = 0;

    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;
    }
    int total_moves = min(zeros, ones);
    
    if (total_moves % 2 != 0) {
        cout << "DA\n";
    } else {
        cout << "NET\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}