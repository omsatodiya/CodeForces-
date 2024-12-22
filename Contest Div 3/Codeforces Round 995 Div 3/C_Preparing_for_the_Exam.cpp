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
  ll n, m, k;
  cin >> n >> m >> k;

  vll notSolve(m);
  for (int i = 0; i < m; i++)
    cin >> notSolve[i];

  vll solvable(k);
  for (int i = 0; i < k; i++)
  {
    cin >> solvable[i];
  }

  unordered_set<int> known;
  for (int i = 0; i < k; i++)
  {
    known.insert(solvable[i]);
  }

  if (solvable == notSolve)
  {
    for (int i = 0; i < m; i++)
    {
      cout << "1";
    }
    cout << endl;
    return;
  }

  string result = "";
  for (int i = 0; i < m; i++)
  {
    if (known.size() == n - 1 && known.count(notSolve[i]) == 0)
    {
      result += '1';
    }
    else
    {
      result += '0';
    }
  }

  cout << result << endl;
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
