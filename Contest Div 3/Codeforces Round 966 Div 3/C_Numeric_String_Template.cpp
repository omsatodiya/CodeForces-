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

bool solve(int n, vector<int>& arr, string& s) {
    if (s.length() != n) return false;

    unordered_map<int, char> nc;
    unordered_map<char, int> cn;

    for (int i = 0; i < n; i++) {
        if (nc.count(arr[i]) > 0) {

            if (nc[arr[i]] != s[i]) {
              return false;
            }

        } else if (cn.count(s[i]) > 0) {
          
            if (cn[s[i]] != arr[i]) {
              return false;
            }

        } else {
            nc[arr[i]] = s[i];
            cn[s[i]] = arr[i];
        }
    }
    return true;
}

int main() {

ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t;
cin >> t;

while(t--) {
    int n,m;
    cin >> n;
    vector<int> arr(n);
    fr(0, n) {
      cin >> arr[i];
    }
    cin >> m;
    vector<string> s(m);
    fr(0, m) {
      cin >> s[i];
    }

    for(int i=0; i<m; i++) {
      if(solve(n, arr, s[i])) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
}

return 0;
}