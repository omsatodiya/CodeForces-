#include <bits/stdc++.h>
#define deb(x) cout << #x << "=" << x << '\n'
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << '\n'
#define deb3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << '\n'
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ff first
#define ss second
#define ub upper_bound
#define lb lower_bound
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long int, long long int>>
#define vvi vector<vector<int>>
#define vll vector<long long int>
#define ll long long int
#define fr(a, b) for (int i = a; i < b; i++)
#define fr1(a, b) for (int j = a; j < b; j++)
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
#define be begin
#define all(p) p.begin(), p.end()
#define um unordered_map
#define print(a)      \
  for (auto x : a)    \
    cout << x << " "; \
  cout << '\n';
#define print1(a)  \
  for (auto x : a) \
    cout << x.ff << " " << x.ss << '\n';
#define print2(a)       \
  for (auto x : a)      \
  {                     \
    for (auto y : x)    \
      cout << y << " "; \
    cout << "\n"        \
  }
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n);

    fr(0, n)
    {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    while (arr.size() > 1)
    {
      int sum = arr[0] + arr[1];
      int flr = floor(sum / 2);

      arr.erase(arr.begin());
      arr.erase(arr.begin());

      arr.insert(arr.begin(), flr);
    }

    cout << arr[0] << endl;
  }

  return 0;
}
