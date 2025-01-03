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
#define allR(p) p.rbegin(), p.rend()
#define um unordered_map
#define ok(x)          \
  {                    \
    cout << x << endl; \
    return;            \
  }

/* ------------------------------------------------- TEMPLATE ENDS --------------------------------------------------*/

void solve()
{
  string s, t;
  cin >> s >> t;

  int n = s.length();
  int m = t.length();

  string res = "";
  int i = 0, j = 0;
  while (i < n)
  {
    if (s[i] == '?' && j < m)
    {
      res += t[j];
      i++;
      j++;
    }
    else if (s[i] == t[j] && j < m)
    {
      res += s[i];
      i++;
      j++;
    }
    else if (s[i] != t[j] && j < m)
    {
      res += s[i];
      i++;
    }
    else if (s[i] == '?' && j >= m)
    {
      res += 'a';
      i++;
    }
    else
    {
      res += s[i];
      i++;
    }
  }

  if (j != m)
    ok("NO") else
    {
      cout << "YES" << endl;
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
