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

bool solve(int n, vector<int>& arr) {
    vector<bool> track(n + 1, false);
    track[arr[0]] = true;
    
    for(int i = 1; i < n; i++) {
        int seat = arr[i];
        
        if (seat > 1 && track[seat - 1]) {
            track[seat] = true;
            continue;
        }
        if (seat < n && track[seat + 1]) {
            track[seat] = true;
            continue;
        }
        
        bool validSeatExists = false;
        for (int j = 1; j <= n; j++) {
            if (!track[j] && ((j > 1 && track[j-1]) || (j < n && track[j+1]))) {
                validSeatExists = true;
                break;
            }
        }
        
        if (!validSeatExists) {
            track[seat] = true;  
        } else {
            return false;  
        }
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
    vector<int> arr(n);
    fr(0,n) {
      cin >> arr[i];
    }
    if(solve(n, arr)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

return 0;
}