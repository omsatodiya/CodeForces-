#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isGoodString(const string& s) {
     int n = s.length();
    if(n<2) return false;
    if(s[0] != s[n-1]) return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        if (isGoodString(s)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}