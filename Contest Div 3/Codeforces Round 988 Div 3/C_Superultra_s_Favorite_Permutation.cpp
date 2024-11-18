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
bool isComposite(int n)
{
  if (n <= 3)
    return false;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return true;
  }
  return false;
}

void solve()
{
  int n;
  cin >> n;

  if (n <= 3)
  {
    cout << "-1\n";
    return;
  }

  vector<int> result;

  if (n <= 4)
  {
    cout << "-1\n";
    return;
  }
  vector<int> odd, even;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2)
    {
      if (i != 5)
        odd.push_back(i);
    }
    else
    {
      if (i != 4)
        even.push_back(i);
    }
  }

  reverse(odd.begin(), odd.end());
  odd.push_back(5);

  even.push_back(4);
  reverse(even.begin(), even.end());

  for (int x : odd)
    result.push_back(x);
  for (int x : even)
    result.push_back(x);

  for (int i = 1; i < n; i++)
  {
    if (!isComposite(result[i - 1] + result[i]))
    {
      cout << "-1" << endl;
      return;
    }
  }

  for (int x : result)
  {
    cout << x << " ";
  }
  cout << "\n";
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
