#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int a, b, c;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if ( (a + c) % 2 == 0 && ((a + c) / 2) % b == 0|| (2 * b - c) > 0 && (2 * b - c) % a == 0 || (2 * b - a) > 0 && (2 * b - a) % c == 0)
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