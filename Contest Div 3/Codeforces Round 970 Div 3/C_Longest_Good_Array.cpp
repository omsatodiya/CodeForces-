#include <bits/stdc++.h>
#define deb(x) cout<<#x<<"="<<x<<'\n'
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define deb3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ff first
#define ss second
#define ub upper_bound
#define lb lower_bound
#define vpi vector<pair<int, int > >
#define vpl vector<pair<long long int, long long int > >
#define vvi vector<vector<int> >
#define vll vector<long long int>
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

ll solve(ll l, ll r) {
    // Calculate the difference between r and l
    ll diff = r - l;
    
    // Calculate the maximum k such that k*(k + 1)/2 <= diff
    ll k = (-1 + sqrt(1 + 8 * diff)) / 2;
    
    // The length of the good array is k + 1
    return k + 1;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while(t--) {
        ll l, r;
        cin >> l >> r;
        cout << solve(l, r) << endl;
    }

    return 0;
}
