#include <iostream>
#include <vector>

using namespace std;

int findX(vector<int>& a) {
    int n = a.size();
    int xorSum = 0;
    
    // Calculate XOR sum of all elements in a
    for (int num : a) {
        xorSum ^= num;
    }
    
    // If XOR sum is already 0, we can choose x = 0
    if (xorSum == 0) return 0;
    
    // Try all possible values of x from 0 to 255
    for (int x = 1; x < 256; x++) {
        int newXorSum = 0;
        for (int num : a) {
            newXorSum ^= (num ^ x);
        }
        if (newXorSum == 0) return x;
    }
    
    // If no valid x found, return -1
    return -1;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        cout << findX(a) << endl;
    }
    
    return 0;
}