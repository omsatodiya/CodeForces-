#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(vector<int>& a) {
    int n = a.size();
    vector<int> track;

    if(n==1) return a[0];

    bool turn = true; 

    int i=0;
    while(i<n) {
      if(i==0) {
        track.push_back(max(a[0], a[1]));
        turn = false;
        i+=2;
      } else if( turn == false) {
        track.push_back(min(track.back(), a[i]));
        turn = true;
        i++;
      } else if(turn == true) {
        track.push_back(max(track.back(), a[i]));
        turn = false;
        i++;
      }
    }

    return track.back();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << solve(a) << endl;
    }

    return 0;
}