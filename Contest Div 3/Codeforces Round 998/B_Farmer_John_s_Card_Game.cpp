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

bool powerof2(int x)
{
  return x && !(x & (x - 1));
}

/* ------------------------------------------------- TEMPLATE ENDS --------------------------------------------------*/

void solve()
{
  int n, m;
  cin >> n >> m;

  vvi arr(n, vi(m));
  vi smallest(n), order(n);

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cin >> arr[i][j];
    }
    sort(all(arr[i]));
    smallest[i] = arr[i][0];
    order[i] = i + 1;
  }

  vpi temp(n);
  for (int i = 0; i < n; ++i)
  {
    temp[i] = {smallest[i], order[i]};
  }
  sort(all(temp));

  for (int i = 0; i < n; ++i)
  {
    order[i] = temp[i].second;
  }

  int no = -1;
  bool valid = true;

  for (int r = 0; r < m && valid; r++)
  {
    for (int i = 0; i < n && valid; i++)
    {
      int cow = order[i] - 1;
      bool played = false;
      for (int j = 0; j < m; ++j)
      {
        if (arr[cow][j] > no)
        {
          no = arr[cow][j];
          arr[cow][j] = -1;
          played = true;
          break;
        }
      }
      if (!played)
        valid = false;
    }
  }
  if (valid)
  {
    for (int i = 0; i < n; ++i)
    {
      cout << order[i] << " ";
    }
    cout << endl;
  }
  else
  {
    ok(-1)
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
