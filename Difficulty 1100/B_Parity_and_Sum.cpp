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
  int n;
  cin >> n;

  vll arr(n);

  for (auto &x : arr)
    cin >> x;

  vll even;
  vll odd;

  for (auto x : arr)
  {
    if (x % 2 != 0)
      odd.push_back(x);
    else
      even.push_back(x);
  }

  if (odd.size() == 0 || even.size() == 0)
    ok(0)

        sort(all(odd));
  sort(all(even));

  ll maxi = odd.back();
  ll ans = even.size();

  for (auto x : even)
  {
    if (x > maxi)
    {
      ans++;
      break;
    }
    maxi += x;
  }

  ok(ans)
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
