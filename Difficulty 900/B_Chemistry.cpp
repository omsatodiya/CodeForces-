#include <bits/stdc++.h>
using namespace std;

bool canMakePalindrome(string s, int k) {
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }
    
    int oddCount = 0;
    int totalChars = s.length();
    
    for (int f : freq) {
        if (f % 2 != 0) {
            oddCount++;
        }
    }
    
    return (oddCount <= k + 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        if (canMakePalindrome(s, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}