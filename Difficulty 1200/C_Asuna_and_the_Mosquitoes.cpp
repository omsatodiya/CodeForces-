#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>

#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sortall(v) sort(all(v))
#define revall(v) reverse(all(v))
#define pb push_back
#define pob pop_back
#define mod 1000000007
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define nl cout << "\n";

#define maxi(v) *max_element(all(v))
#define mini(v) *min_element(all(v))

#define yes cout << "YES\n"
#define no cout << "NO\n"

// loops
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define loopr(i, a, b) for (ll i = a; i > b; i--)
#define loopi(i, a, b) for (ll i = a; i <= b; i++)
#define loopri(i, a, b) for (ll i = a; i >= b; i--)

// input/output
#define inp(x) \
  ll x;        \
  cin >> x;
#define inp2(x, y) \
  ll x, y;         \
  cin >> x >> y;
#define inp3(x, y, z) \
  ll x, y, z;         \
  cin >> x >> y >> z;

#define rvec(v, n) loop(i, 0, n) cin >> v[i];
#define inprvec(v, n) \
  vll v(n);           \
  loop(i, 0, n) cin >> v[i];

#define ptvec(a)      \
  for (auto &x : a)   \
    cout << x << " "; \
  cout << endl;
#define pt(x) cout << x << "\n";
#define pt2(x, y) cout << x << " " << y << "\n";
#define pt3(x, y, z) cout << x << " " << y << " " << z << "\n";
#define pt4(w, x, y, z) cout << w << " " << x << " " << y << " " << z << "\n";

#define ok(x)          \
  {                    \
    cout << x << endl; \
    return;            \
  }

// Math utilities
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
  return (a / gcd(a, b)) * b;
}

ll mod_exp(ll base, ll exp, ll MOD)
{
  ll result = 1;
  base %= MOD;
  while (exp > 0)
  {
    if (exp & 1)
      result = (result * base) % MOD;
    base = (base * base) % MOD;
    exp >>= 1;
  }
  return result;
}

// Sieve for primes
vector<bool> sieve(ll n)
{
  vector<bool> is_composite(n + 1, false);
  is_composite[0] = is_composite[1] = true;
  for (ll i = 2; i * i <= n; i++)
  {
    if (!is_composite[i])
    {
      for (ll j = i * i; j <= n; j += i)
      {
        is_composite[j] = true;
      }
    }
  }
  return is_composite;
}

vector<ll> getPrimes(ll n)
{
  vector<bool> is_composite = sieve(n);
  vector<ll> primes;
  for (ll i = 2; i <= n; i++)
  {
    if (!is_composite[i])
      primes.pb(i);
  }
  return primes;
}

// Solve function
void solve()
{
  inp(n);
  inprvec(arr, n);

  bool allSame = true;
  int par = arr[0] % 2;
  ll sum = 0;
  int oddCnt = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    if (arr[i] % 2 != par)
    {
      allSame = false;
    }

    if (arr[i] % 2 != 0)
      oddCnt++;
  }

  if (allSame)
  {
    pt(maxi(arr))
  }
  else
  {
    pt(sum - oddCnt + 1)
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
