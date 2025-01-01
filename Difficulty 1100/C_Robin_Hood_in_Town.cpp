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
#define mod 1000000007

/* ------------------------------------------------- TEMPLATE ENDS --------------------------------------------------*/

void solve()
{
  int n;
  cin >> n;

  vll arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  if (n == 1 || n == 2)
  {
    ok(-1);
  }
  sort(all(arr));
  const ll unHappy = arr[n / 2];
  const ll sum = accumulate(all(arr), 0LL);
  const ll ans = max(0LL, unHappy * 2 * n - sum + 1);
  ok(ans);
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

/*

currSum = 10
reqele =3

expression : sum / 4 > arr[n / 2]

reqsum = (reqele * n * 2)+1;

8 7

7 8

*/