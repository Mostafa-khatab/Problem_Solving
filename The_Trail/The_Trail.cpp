#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define fs first
#define sc second
#define int ll
#define nl '\n'
const int N = 1e4;

void get_shit_done() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    map<int, int> mp1, mp2;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
        mp1[i] = sum;
    }
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i][j];
        }
        mp2[j] = sum;
    }
    int x = 0, y = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'R') {
            int sum = mp2[y];
            a[x][y] = -1 * sum;
            mp1[x] += -sum;
            y++;
        } else {
            int sum = mp1[x];
            a[x][y] = -1 * sum;
            mp2[y] += -1 * sum;
            x++;
        }
    }
    int sum = mp1[x];
    a[x][y] = -sum;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)cout << a[i][j] << " ";
        cout << nl;
    }


}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin), freopen("out.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        get_shit_done();

    }
}