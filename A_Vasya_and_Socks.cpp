#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,  m; 
    cin >> n >> m;
    int days = n + (n - 1) / (m - 1);
    cout << days << "\n";
}