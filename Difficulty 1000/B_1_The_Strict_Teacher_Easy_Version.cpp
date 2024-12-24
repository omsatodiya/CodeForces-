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
  int n, m, q;
  cin >> n >> m >> q;
  vi b(m);
  for (int i = 0; i < m; i++)
    cin >> b[i];
  vi david(q);
  for (int i = 0; i < q; i++)
    cin >> david[i];

  sort(all(b));

  int k = upper_bound(b.begin(), b.end(), david[0]) - b.begin();

  if (k == 0)
  {
    ok(b[0] - 1)
  }
  else if (k == m)
  {
    ok(n - b[1])
  }
  else
  {
    ok((b[k] - b[k - 1]) / 2)
  }

  ok(0)
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
