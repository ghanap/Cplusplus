#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;

    while (t--){
        vector<string> grid(8);
        for (int i = 0; i < 8; ++i) {
            cin >> grid[i];
        }
        for (int i = 0; i < 8; ++i) {
            if (grid[i] == "RRRRRRRR") {
                cout << "R\n";
                break;
            }
            else if (i == 7) {
                cout << "B\n";
            }
        }
    }
}