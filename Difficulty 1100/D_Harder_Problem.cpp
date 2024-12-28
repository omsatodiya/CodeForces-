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
  vector<int> a(n + 1), b(n);
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (!a[x])
    {
      b[i] = x;
      a[x] = 1;
    }
  }
  queue<int> q;
  for (int i = 1; i <= n; i++)
    if (!a[i])
      q.push(i);
  for (int i = 0; i < n; i++)
  {
    if (!b[i])
    {
      b[i] = q.front();
      q.pop();
    }
  }
  for (int i = 0; i < n; i++)
    cout << b[i] << " \n"[i == n - 1];
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
