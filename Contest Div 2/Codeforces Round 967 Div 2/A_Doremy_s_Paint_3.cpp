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
#define vpi vector<pair<int, int> >
#define vpl vector<pair<long long int, long long int> >
#define vvi vector<vector<int>>
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
#define print2(a) for(auto x : a){for(auto y : x) cout<<y<<" ";cout<<"\n";}
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t) {
        int n;
        cin >> n;
        
        vi arr(n);
        fr(0, n) cin >> arr[i];

        bool yes = true;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) {
          mp[arr[i]]++;

          if(mp.size() > 2) {
            yes = false;
            break;
          }
        }

        if(mp.size() == 2) {
          int f1 = begin(mp)->second;

          if(f1 != n/2 && f1 != (n+1)/2) {
            yes = false;
          }
        }

        if(yes) cout << "Yes" << endl;
        else cout << "No" << endl;
        
        
    }

    return 0;
}