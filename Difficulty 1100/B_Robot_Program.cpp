#include <bits/stdc++.h>
using namespace std;

/* ------------------------------------------------- TEMPLATE STARTS --------------------------------------------------*/
#define pb push_back
#define int long long
#define vi vector<int>
#define all(p) p.begin(), p.end()
#define ok(x)          \
  {                    \
    cout << x << endl; \
    return;            \
  }

/* ------------------------------------------------- TEMPLATE ENDS --------------------------------------------------*/

void solve()
{
  int n, x, k;
  cin >> n >> x >> k;
  string s;
  cin >> s;

  bool f = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'L')
      x--;
    else
      x++;
    k--;
    if (x == 0)
    {
      f = 1;
      break;
    }
    if (k == 0)
    {
      cout << "0\n";
      return;
    }
  } // n
  if (f == 0)
  {
    cout << "0\n";
    return;
  }

  int ans = 1;
  int t = 0;
  f = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'L')
    {
      x--;
    }
    else
      x++;
    t++;
    if (x == 0)
    {
      f = 1;
      break;
    }
  } // n
  if (f)
    ans += k / t;

  cout << ans << '\n';
}

int32_t main()
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
