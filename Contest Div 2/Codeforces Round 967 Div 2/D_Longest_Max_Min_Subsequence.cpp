#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result;
    set<int> used;

    for (int i = 0; i < n; i++) {
        if (used.find(a[i]) == used.end()) {
            result.push_back(a[i]);
            used.insert(a[i]);
        }
    }

    // Sort the result based on the required criteria
    stable_sort(result.begin(), result.end(), [](int x, int y) {
        return -x < -y;  // This simulates multiplying odd positions by -1
    });

    // Output
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << (i == result.size() - 1 ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}