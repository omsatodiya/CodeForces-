// Om Satodiya
#include <bits/stdc++.h>
using namespace std;

/* ------------------------------------------------- TEMPLATE STARTS --------------------------------------------------*/
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vpl vector<pair<long long int, long long int>>
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define vpi vector<pair<int, int>>
#define ff first
#define ss second
#define ll long long int
#define all(p) p.begin(), p.end()
#define um unordered_map
#define ok(x)          \
  {                    \
    cout << x << endl; \
    return;            \
  }

/* ------------------------------------------------- TEMPLATE ENDS --------------------------------------------------*/

void solve()
{
  string s;
  cin >> s;

  int n = s.length();
  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] == s[i + 1])
    {
      cout << s.substr(i, 2) << endl;
      return;
    }
  }

  // case 2
  for (int i = 0; i < n - 2; i++)
  {
    if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2])
    {
      cout << s.substr(i, 3) << endl;
      return;
    }
  }

  ok(-1)
}

int main()
{

  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
