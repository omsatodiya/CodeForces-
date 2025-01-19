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
  int a1, a2, a4, a5;
  cin >> a1 >> a2 >> a4 >> a5;

  int ans = 0;

  vll temp;

  temp.push_back(a4 - a2);

  temp.push_back(a2 + a1);

  temp.push_back(a5 - a4);

  for (ll base_a3 : temp)
  {
    for (ll j = -1; j <= 1; j++)
    {
      ll a3 = base_a3 + j;

      int fibo = 0;

      if (a3 == a1 + a2)
      {
        fibo++;
      }

      if (a4 == a2 + a3)
      {
        fibo++;
      }

      if (a5 == a3 + a4)
      {
        fibo++;
      }

      ans = max(ans, fibo);
    }
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
