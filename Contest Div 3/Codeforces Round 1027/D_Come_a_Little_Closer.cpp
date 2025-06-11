#include <bits/stdc++.h>
using namespace std;

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

ll fitArea(ll w, ll h, ll n)
{
  ll area = w * h;
  if (area >= n)
    return area;

  ll newW = max(w, (n + h - 1) / h);
  ll area1 = newW * h;

  ll newH = max(h, (n + w - 1) / w);
  ll area2 = newH * w;

  return min(area1, area2);
}

ll area(ll minX, ll maxX, ll minY, ll maxY, ll n)
{
  return fitArea(maxX - minX, maxY - minY, n);
}

void solve()
{
  inp(n);
  vll x(n), y(n);
  loop(i, 0, n) cin >> x[i] >> y[i];

  if (n == 1)
    ok(1);

  ll miniX = INF, maxiX = NINF, miniX2 = INF, maxiX2 = NINF;
  ll miniY = INF, maxiY = NINF, miniY2 = INF, maxiY2 = NINF;
  int cntMiniX = 0, cntMaxiX = 0, cntminiY = 0, cntmaxiY = 0;

  loop(i, 0, n)
  {
    if (x[i] < miniX)
    {
      miniX2 = miniX;
      miniX = x[i];
      cntMiniX = 1;
    }
    else if (x[i] == miniX)
    {
      cntMiniX++;
    }
    else if (x[i] < miniX2)
    {
      miniX2 = x[i];
    }

    if (x[i] > maxiX)
    {
      maxiX2 = maxiX;
      maxiX = x[i];
      cntMaxiX = 1;
    }
    else if (x[i] == maxiX)
    {
      cntMaxiX++;
    }
    else if (x[i] > maxiX2)
    {
      maxiX2 = x[i];
    }

    if (y[i] < miniY)
    {
      miniY2 = miniY;
      miniY = y[i];
      cntminiY = 1;
    }
    else if (y[i] == miniY)
    {
      cntminiY++;
    }
    else if (y[i] < miniY2)
    {
      miniY2 = y[i];
    }

    if (y[i] > maxiY)
    {
      maxiY2 = maxiY;
      maxiY = y[i];
      cntmaxiY = 1;
    }
    else if (y[i] == maxiY)
    {
      cntmaxiY++;
    }
    else if (y[i] > maxiY2)
    {
      maxiY2 = y[i];
    }
  }

  ll ans = area(miniX, maxiX, miniY, maxiY, n);

  loop(i, 0, n)
  {
    bool flag = (x[i] == miniX || x[i] == maxiX || y[i] == miniY || y[i] == maxiY);

    if (!flag)
    {
      continue;
    }

    ll newminiX = miniX;
    ll newmaxiX = maxiX;
    ll newminiY = miniY;
    ll newmaxiY = maxiY;

    if (x[i] == miniX && cntMiniX == 1)
      newminiX = miniX2;
    if (x[i] == maxiX && cntMaxiX == 1)
      newmaxiX = maxiX2;
    if (y[i] == miniY && cntminiY == 1)
      newminiY = miniY2;
    if (y[i] == maxiY && cntmaxiY == 1)
      newmaxiY = maxiY2;

    ans = min(ans, area(newminiX, newmaxiX, newminiY, newmaxiY, n));
  }

  ok(ans);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cout.precision(numeric_limits<double>::max_digits10);

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
