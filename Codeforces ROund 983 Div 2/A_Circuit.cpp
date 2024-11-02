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
  vector<int> arr(2 * n);
  int cntOnes = 0;

  for (int i = 0; i < 2 * n; i++)
  {
    cin >> arr[i];
    if (arr[i] == 1)
      cntOnes++;
  }

  int mini = (cntOnes % 2 == 0) ? 0 : 1;
  int maxi = (cntOnes <= n) ? cntOnes : (2 * n - cntOnes);

  cout << mini << " " << maxi << endl;
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

// Om's Solution