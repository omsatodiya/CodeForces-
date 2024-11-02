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
  int n, k;
  cin >> n >> k;
  vector<long long> results;

  map<int, vector<int>> mp;

  for (int i = 0; i < k; i++)
  {
    int brand, cost;
    cin >> brand >> cost;
    mp[brand].push_back(cost);
  }

  vector<long long> value;

  for (auto &pair : mp)
  {
    int brand = pair.first;
    vector<int> &costs = pair.second;

    sort(costs.rbegin(), costs.rend());
    long long tot = 0;

    for (int cost : costs)
    {
      tot += cost;
    }
    value.push_back(tot);
  }

  sort(value.rbegin(), value.rend());

  long long earn = 0;
  for (int i = 0; i < min(n, (int)value.size()); i++)
  {
    earn += value[i];
  }

  cout << earn << endl;
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
