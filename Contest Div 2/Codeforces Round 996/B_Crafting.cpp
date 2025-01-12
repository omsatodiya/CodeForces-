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

/* ------------------------------------------------- TEMPLATE ENDS --------------------------------------------------*/

void solve()
{
  int n;
  cin >> n;
  vll a(n);
  vll b(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  bool flag = true;
  vll temp = a;

  for (int i = 0; i < n && flag; i++)
  {
    if (temp[i] >= b[i])
      continue;

    ll needed = b[i] - temp[i];
    ll avail = INT_MAX;

    for (int j = 0; j < n; j++)
    {
      if (i == j)
        continue;
      avail = min(avail, temp[j]);
    }

    if (avail < needed || avail == 0)
    {
      flag = false;
      break;
    }

    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        temp[j] += needed;
      }
      else
      {
        temp[j] -= needed;
      }
    }
  }

  if (flag)
  {
    for (int i = 0; i < n; i++)
    {
      if (temp[i] < b[i])
      {
        flag = false;
        break;
      }
    }
  }
  if (flag)
    ok("YES") else ok("NO")
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
  #include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        bool possible = true;
        vector<int> a_c = a;

        for(int i = 0; i < n && possible; i++) {
            if(a_c[i] >= b[i]) continue;

            int needed = b[i] - a_c[i];
            int avail = INT_MAX;

            for(int j = 0; j < n; j++) {
                if(i == j) continue;
                avail = min(avail, a_c[j]);
            }

            if(avail < needed || avail == 0) {
                possible = false;
                break;
            }

            for(int j = 0; j < n; j++) {
                if(i == j) {
                    a_c[j] += needed;
                } else {
                    a_c[j] -= needed;
                }
            }
        }

        if(possible) {
            for(int i = 0; i < n; i++) {
                if(a_c[i] < b[i]) {
                    possible = false;
                    break;
                }
            }
        }
        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }



    return 0;
}
*/