#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m = n % 2020;
        int l = n / 2020 - m;
        if (m * 2021 + l * 2020 == n && l >= 0) cout << "YES\n";
        else cout << "NO\n";
    }
    }