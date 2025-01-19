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
  string s;
  cin >> s;
  int sum = 0;
  int n2 = 0, n3 = 0;
  for (int i = 0; i < s.length(); ++i)
  {
    if (s[i] == '2')
    {
      n2++;
    }
    if (s[i] == '3')
    {
      n3++;
    }
    sum += (s[i] - '0');
  }
  if (sum % 9 == 0)
  {
    ok("YES");
  }
  for (int i = 0; i <= min(8, n2); ++i)
  {
    for (int j = 0; j <= min(8, n3); ++j)
    {
      int nsum = sum + i * 2 + j * 6;
      if (nsum % 9 == 0)
      {
        ok("YES");
      }
    }
  }
  ok("NO");
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
