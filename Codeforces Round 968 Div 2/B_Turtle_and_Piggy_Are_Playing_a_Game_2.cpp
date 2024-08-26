#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<int>& a) {
   int n = a.size();
   sort(a.begin(), a.end());
   return a[n/2];
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

        cout << solve(a) << endl;
    }

    return 0;
}