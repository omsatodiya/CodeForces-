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
  int r, c;
  cin >> r >> c;

  vector<string> arr(r);
  for (int i = 0; i < r; i++)
  {
    cin >> arr[i];
  }

  vector<vector<int>> res;

  int t = 0, l = 0;
  int b = r - 1, r1 = c - 1;

  while (t <= b && l <= r1)
  {
    vi v;

    for (int i = l; i <= r1; i++)
    {
      v.pb(arr[t][i] - '0');
    }
    for (int i = t + 1; i <= b; i++)
    {
      v.pb(arr[i][r1] - '0');
    }

    if (t < b)
    {
      for (int i = r1 - 1; i >= l; i--)
      {
        v.pb(arr[b][i] - '0');
      }
    }

    if (l < r1)
    {
      for (int i = b - 1; i > t; i--)
      {
        v.pb(arr[i][l] - '0');
      }
    }

    res.pb(v);
    l++;
    r1--;
    t++;
    b--;
  }

  int cnt = 0;

  for (const auto &a : res)
  {
    vi curr = a;
    int n = curr.size();

    vi targ = {1, 5, 4, 3};
    int wind = 4;

    for (int i = 0; i < n; i++)
    {
      vi check;
      for (int j = 0; j < wind; j++)
      {
        check.pb(curr[(i + j) % n]);
      }
      if (check == targ)
      {
        cnt++;
      }
    }
  }

  cout << cnt << endl;
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