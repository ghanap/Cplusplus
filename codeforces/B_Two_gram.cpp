#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    map<string, int> counts;
   
    for (int i = 0; i < n - 1; i++) {
        string twogram = s.substr(i, 2);
        counts[twogram]++;
    }
    
    string best_twogram = "";
    int max_count = 0;
    
    for (auto const& [twogram, count] : counts) {
        if (count > max_count) {
            max_count = count;
            best_twogram = twogram;
        }
    }
    
    cout << best_twogram << endl;
    return 0;
}