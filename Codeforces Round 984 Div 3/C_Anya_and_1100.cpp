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
  int n = s.size();
  int q;
  cin >> q;

  set<int> has_1100;
  for (int i = 0; i <= n - 4; i++)
  {
    if (s.substr(i, 4) == "1100")
    {
      has_1100.insert(i);
    }
  }

  vector<string> results;

  while (q--)
  {
    int i, v;
    cin >> i >> v;
    --i;

    if (s[i] != '0' + v)
    {
      for (int j = max(0, i - 3); j <= min(n - 4, i); j++)
      {
        if (s.substr(j, 4) == "1100")
        {
          has_1100.erase(j);
        }
      }

      s[i] = '0' + v;

      for (int j = max(0, i - 3); j <= min(n - 4, i); j++)
      {
        if (s.substr(j, 4) == "1100")
        {
          has_1100.insert(j);
        }
      }
    }

    results.push_back(has_1100.empty() ? "NO" : "YES");
  }

  for (const string &res : results)
  {
    cout << res << endl;
  }
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

// Om Satodiya Solution