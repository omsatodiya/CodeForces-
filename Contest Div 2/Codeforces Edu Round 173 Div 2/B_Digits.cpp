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

ll factorial(int n)
{
  ll fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

void solve()
{
  ll n;
  int d;
  cin >> n >> d;

  vector<int> ans;

  ans.push_back(1);

  if (n <= 5)
  {
    ll sum = d * factorial(n);
    if (sum % 3 == 0)
    {
      ans.push_back(3);
      if (sum % 9 == 0)
      {
        ans.push_back(9);
      }
    }
  }
  else
  {
    ans.push_back(3);
    ans.push_back(9);
  }

  if (d == 5)
  {
    ans.push_back(5);
  }

  if (n >= 3 || d % 7 == 0)
  {
    ans.push_back(7);
  }

  sort(ans.begin(), ans.end());

  for (int x : ans)
  {
    cout << x << " ";
  }
  cout << endl;
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
