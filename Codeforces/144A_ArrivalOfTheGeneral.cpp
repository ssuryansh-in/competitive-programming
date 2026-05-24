#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#else
#define debug
#endif

#define int long long
#define double long double

#define endl '\n'
#define pb push_back
#define ff first
#define ss second

#define f(i, n) for (int i = 0; i < n; i++)
#define F(i, n) for (int i = 1; i <= n; i++)

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define sz(x) (int)x.size()

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
typedef map<int, int> mii;
typedef set<int> si;
typedef multiset<int> msi;
typedef unordered_map<int, int> umii;

const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve() {
    int n;
    cin >> n;
    vi v(n);
    f(i, n) cin >> v[i];

    int maxi = LLONG_MIN, mini = LLONG_MAX, minI = 0, maxI = 0;
    f(i, n) {
        if(v[i] > maxi) {
            maxi = v[i];
            maxI = i;
        }

        if(v[i] <= mini) {
            mini = v[i];
            minI = i;
        }
    }

    if(minI < maxI) {
        cout << maxI + n - minI - 1 - 1;
    }
    else {
        cout << maxI + n - minI - 1;
    }
    cout << endl;
}

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    debug

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
