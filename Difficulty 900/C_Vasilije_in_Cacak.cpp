#include <iostream>
#include <algorithm>

using namespace std;

bool canChooseNumbers(long long n, long long k, long long x) {
    long long minSum = k * (k + 1) / 2;
    long long maxSum = k * (2 * n - k + 1) / 2;
    
    return (x >= minSum && x <= maxSum);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        
        if (canChooseNumbers(n, k, x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}