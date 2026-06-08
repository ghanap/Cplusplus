#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int maxlen = 1;
        int currlen = 1;
        
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) {
                currlen++;
                maxlen = max(maxlen, currlen);
            } else {
                currlen = 1;
            }
        }
        
        cout << maxlen + 1 << endl;
    }
    return 0;
}