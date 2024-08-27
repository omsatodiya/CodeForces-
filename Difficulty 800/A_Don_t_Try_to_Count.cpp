#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        
        int operations = 0;
        string current = x;
        
        while (current.length() < s.length()) {
            current += current;
            operations++;
        }
        
        if (current.find(s) != string::npos) {
            cout << operations << endl;
        } else if ((current + x).find(s) != string::npos) {
            cout << operations + 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
    
    return 0;
}