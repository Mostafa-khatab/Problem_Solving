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
    cout << 1 << " " << 1 << " ";
    for (int i = 2; i < n - 2; i++) {
        cout << i << " ";
    }
    cout << 1 << " " << 2 << nl;
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