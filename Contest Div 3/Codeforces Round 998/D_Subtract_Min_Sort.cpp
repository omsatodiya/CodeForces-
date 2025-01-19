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
  int n;
  cin >> n;
  vi arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  bool flag = false;

  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      flag = true;
      break;
    }
    else
    {
      arr[i + 1] -= arr[i];
      arr[i] = 0;
    }
  }

  if (flag)
  {
    ok("NO")
  }
  else
  {
    ok("YES")
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
