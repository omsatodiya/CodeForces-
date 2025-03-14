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
  int len, val;
  cin >> len >> val;
  vector<int> ans(len, val);
  int or_val = 0;
  bool flag = true;
  for (int i = 0; i < len - 1; ++i)
  {
    if (((or_val | i) & val) == (or_val | i))
    {
      or_val |= i;
      ans[i] = i;
    }
    else
    {
      flag = false;
      break;
    }
  }
  if (flag && (or_val | (len - 1)) == val)
  {
    ans[len - 1] = len - 1;
  }
  for (auto it : ans)
    cout << it << ' ';
  cout << '\n';
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
