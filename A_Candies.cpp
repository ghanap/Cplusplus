#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int a;
        cin >> a; 
        for (int p = 2; p <= 30; p++) {
            int denominator = (int)pow(2, p) - 1;
            if (a % denominator == 0) {
                cout << a / denominator << "\n";
                break; 
            }
        }
    }
    
    return 0;
}