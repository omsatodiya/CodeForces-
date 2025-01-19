// Om Satodiya
#include <bits/stdc++.h>
using namespace std;

/* ------------------------------------------------- TEMPLATE STARTS --------------------------------------------------*/
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define vvi vector<vector<int>>
#define vpl vector<pair<long long, long long>>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vpi vector<pair<int, int>>
#define ff first
#define ss second
#define ll long long
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
  int n, m;
  cin >> n >> m;
  vi xAxis(n), yAxis(n);

  for (int i = 0; i < n; i++)
  {
    cin >> xAxis[i] >> yAxis[i];
  }

  for (int i = 1; i < n; i++)
  {
    xAxis[i] += xAxis[i - 1];
    yAxis[i] += yAxis[i - 1];
  }

  int miniX = *min_element(all(xAxis));
  int miniY = *min_element(all(yAxis));
  int maxiX = *max_element(all(xAxis));
  int maxiY = *max_element(all(yAxis));
  // cout << maxiX << " " << maxiY << endl;
  // cout << miniX << " " << miniY << endl;
  // cout << "------" << endl;

  maxiX += m;
  maxiY += m;

  int diffX = maxiX - miniX;
  int diffY = maxiY - miniY;

  diffX *= 2;
  diffY *= 2;

  ok(diffY + diffX);
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
