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
  int n;
  cin >> n;
  int length = 0;
  while (n > 0)
  {
    n >>= 1;
    length++;
  }

  long long ans = pow(2, length - 1) - 1;
  cout << ans << endl;
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
