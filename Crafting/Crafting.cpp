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
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)cin >> a[i];
    int ok = 0, idx = -1;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] > a[i]) {
            idx = i;
            ok++;
        }
    }
    if (ok > 1) {
        cout << "NO" << nl;
        return;
    }
    if (idx == -1) {
        cout << "YES" << nl;
        return;
    }
    int need = b[idx] - a[idx];
    for (int i = 0; i < n; i++) {
        if (idx == i) {
            a[i] += need;
            continue;
        }
        a[i] -= need;
        if (a[i] < b[i]) {
            cout << "NO" << nl;
            return;
        }
    }
    cout << "YES" << nl;

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