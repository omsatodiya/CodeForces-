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

// Bit Manipulation

bool isPowerOfTwo(unsigned int n)
{
  return n && !(n & (n - 1));
}

bool isDivisibleByPowerOf2(int n, int k)
{
  int powerOf2 = 1 << k;
  return (n & (powerOf2 - 1)) == 0;
}

int countSetBits(int n)
{
  int count = 0;
  while (n)
  {
    n = n & (n - 1);
    count++;
  }
  return count;
}

/* ------------------------------------------------- TEMPLATE ENDS --------------------------------------------------*/

void solve()
{
  int n, m, k;
  cin >> n >> m >> k;

  int players[m + 1];
  for (int i = 0; i <= m; i++)
  {
    cin >> players[i];
  }

  int fedor = players[m];
  int cnt = 0;

  for (int i = 0; i < m; i++)
  {
    int hammingDistance = countSetBits(players[i] ^ fedor);
    if (hammingDistance <= k)
    {
      cnt++;
    }
  }

  cout << cnt << endl;
}

int main()
{

  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // int t;
  // cin >> t;

  // while (t--)
  // {
  //   solve();
  // }

  solve();

  return 0;
}
