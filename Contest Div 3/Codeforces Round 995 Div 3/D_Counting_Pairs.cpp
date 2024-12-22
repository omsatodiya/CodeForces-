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
  ll n, x, y;
  cin >> n >> x >> y;

  vll a(n);
  ll total = 0;

  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
    total += a[i];
  }

  ll l = total - y;
  ll r = total - x;

  sort(a.begin(), a.end());

  ll count = 0;

  for (ll i = 0; i < n; i++)
  {
    ll low = i + 1;
    ll high = n - 1;

    while (low <= high)
    {
      ll mid = (low + high) / 2;
      if (a[i] + a[mid] >= l)
      {
        high = mid - 1;
        // cout << "high1 : " << high << endl;
      }
      else
      {
        low = mid + 1;
        // cout << "low1 : " << low << endl;
      }
    }

    ll start = low;

    low = i + 1;
    high = n - 1;

    while (low <= high)
    {
      ll mid = (low + high) / 2;
      if (a[i] + a[mid] <= r)
      {
        low = mid + 1;
        // cout << "low2 : " << low << endl;
      }
      else
      {
        high = mid - 1;
        // cout << "high2 : " << high << endl;
      }
    }

    ll end = high;

    if (start <= end)
    {
      count += (end - start + 1);
      // cout << count << endl;
    }

    // cout << "---------------------------" << endl;
  }

  ok(count)
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
