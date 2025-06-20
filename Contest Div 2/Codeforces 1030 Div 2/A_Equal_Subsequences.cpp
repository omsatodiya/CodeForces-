#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define ll long long
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sortall(v) sort(all(v))
#define revall(v) reverse(all(v))
#define nl cout << "\n";

#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define mod (1000000000 + 7)
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define pob pop_back
#define pb push_back

// loops
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define loopr(i, a, b) for (ll i = a; i > b; i--)
#define loopi(i, a, b) for (ll i = a; i <= b; i++)
#define loopri(i, a, b) for (ll i = a; i >= b; i--)

// i/p, o/p
#define inp(x) \
  ll x;        \
  cin >> x;
#define inp2(x, y) \
  ll x, y;         \
  cin >> x >> y;
#define inp3(x, y, z) \
  ll x, y, z;         \
  cin >> x >> y >> z;

#define rvec(v, n) \
  loop(i, 0, n) { cin >> v[i]; };
#define inprvec(v, n) \
  vll v(n);           \
  loop(i, 0, n) { cin >> v[i]; };
#define ptvec(a)      \
  for (auto &x : a)   \
  {                   \
    cout << x << " "; \
  }                   \
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

// maths
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
  base = base % MOD;
  while (exp > 0)
  {
    if (exp % 2 == 1)
      result = (result * base) % MOD;
    exp = exp >> 1;
    base = (base * base) % MOD;
  }
  return result;
}

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
    {
      primes.push_back(i);
    }
  }

  return primes;
}

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void solve()
{
  inp2(n, k);
  string ans = "";
  for (int i = 0; i < n; i++)
  {
    if (i < n - k)
      ans.push_back('0');
    else
      ans.push_back('1');
  }

  ok(ans);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cout.precision(numeric_limits<double>::max_digits10);

  auto start = high_resolution_clock::now();

  int t = 1;
  cin >> t;

  while (t--)
  {
    solve();
  }

  auto stop = high_resolution_clock::now();
  duration<double> elapsed = stop - start;

  // cout << "Time " << elapsed.count() << "ms";

  return 0;
}
