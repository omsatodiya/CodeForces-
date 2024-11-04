#include <bits/stdc++.h>
#define deb(x) cout<<#x<<"="<<x<<'\n'
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define deb3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define pb push_back
#define vi vector
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ff first
#define ss second
#define ub upper_bound
#define lb lower_bound
#define vpi vector<pair<int, int > >
#define vpl vector<pair<long long int, long long int > >
#define vvi vector<vector>
#define vll vector
#define ll long long int
#define fr(a,b) for(int i=a;i<b;i++)
#define fr1(a,b) for(int j=a;j<b;j++)
#define w(x) int x;cin>>x;while(x--)
#define be begin
#define all(p) p.begin(),p.end()
#define um unordered_map
#define print(a) for(auto x : a) cout<<x<<" ";cout<<'\n';
#define print1(a) for(auto x : a) cout<<x.ff<<" "<<x.ss<<'\n';
#define print2(a) for(auto x : a){for(auto y : x) cout<<y<<" ";cout<<"\n"}
using namespace std;

bool solve(int n, const string& s) {
    if (n < 4) return false;
    int root = sqrt(n);
    if (root * root != n) return false;

    // Check first and last row
    for (int i = 0; i < root; i++) {
        if (s[i] == '0' || s[n - root + i] == '0') return false;
    }

    // Check first and last column
    for (int i = 0; i < root; i++) {
        if (s[i * root] == '0' || s[(i + 1) * root - 1] == '0') return false;
    }

    int cnt = 0;
    // Check inner square
    for (int i = root + 1; i < n - root - 1; i++) {
        if ((i % root != 0) && ((i + 1) % root != 0)) {
            if (s[i] == '0') cnt++;
        } else if (s[i] == '0') {
            return false;  // '0' found in border
        }
    }

    return cnt == (root - 2) * (root - 2);
}

int main() {

ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t;
cin >> t;

while(t--) {
  int n;
  cin >> n;
  string s;
  cin >> s;
  if(solve(n, s)) cout << "Yes" << endl;
  else cout << "No" << endl;
}

return 0;
}