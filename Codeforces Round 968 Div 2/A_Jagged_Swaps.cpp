#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &a, int n) {
    for (int i = 1; i < n - 1; i++) {
        if (a[i-1] < a[i] && a[i] > a[i+1]) {
            swap(a[i], a[i+1]);
            
            bool sorted = true;
            for (int j = 1; j < n; j++) {
                if (a[j] < a[j-1]) {
                    sorted = false;
                    break;
                }
            }
            
            if (sorted) return true;
            
        }
    }
    
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if(solve(a, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}