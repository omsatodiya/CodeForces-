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
  int n;
  cin >> n;
  string s, r;
  cin >> s >> r;

  int cntZeroS = 0, cntOneS = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '0')
      cntZeroS++;
    else
      cntOneS++;
  }

  for (int i = 0; i < n - 1; i++)
  {
    if (cntOneS == 0 || cntZeroS == 0)
    {
      ok("NO")
    }

    if (r[i] == '0')
      cntOneS--;
    else
      cntZeroS--;
  }

  ok("YES");
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
