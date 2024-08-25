#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 1) {
            cout << "1\n";
        } else if (n == 2) {
            cout << "-1\n";
        } else {
            vector<int> result(n);
            int mid = (n + 1) / 2;

            // Placing the largest number first, followed by the smallest, and then filling up
            for (int i = 0; i < mid; i++) {
                result[i] = mid + i;
            }
            for (int i = mid; i < n; i++) {
                result[i] = i - mid + 1;
            }
            
            // Print the result
            for (int i = 0; i < n; ++i) {
                cout << result[i] << " ";
            }
            cout << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}
