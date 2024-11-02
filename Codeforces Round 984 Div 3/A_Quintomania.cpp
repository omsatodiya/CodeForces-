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
  vi arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  bool ans = true;

  for (int i = 1; i < n; i++)
  {
    int interval = abs(arr[i] - arr[i - 1]);
    if (interval != 5 && interval != 7)
    {
      ans = false;
      break;
    }
  }

  if (ans)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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