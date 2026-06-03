#include <iostream>
using namespace std;
int main(){
    char t;
    cin >> t;
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < t; i++)
    {
        if ( 2*b - a % c == 0 || 2*a - b % c == 0 || (a + b) % 2 == 0 && (a + b) / 2 % c == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}