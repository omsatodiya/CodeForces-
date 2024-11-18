#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> freq;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    freq[a[i]]++;
  }

  int score = 0;
  for (auto it : freq)
  {
    score += it.second / 2;
  }

  cout << score << endl;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
