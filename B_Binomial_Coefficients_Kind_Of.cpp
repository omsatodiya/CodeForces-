#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int compute_C(int n, int k)
{
  vector<int> C(k + 1, 0);

  C[0] = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = min(i, k); j > 0; j--)
    {
      C[j] = (C[j] + C[j - 1]) % MOD;
    }
  }

  return C[k];
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  vector<int> n(t), k(t);
  for (int i = 0; i < t; i++)
  {
    cin >> n[i];
  }
  for (int i = 0; i < t; i++)
  {
    cin >> k[i];
  }

  for (int i = 0; i < t; i++)
  {
    cout << compute_C(n[i], k[i]) << '\n';
  }

  return 0;
}
