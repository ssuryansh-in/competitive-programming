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
    vector<vector<int>> mat(5, vector<int>(5));
    
    int row = -1, col = -1;
    f(i,5) {
        f(j, 5) {
            cin >> mat[i][j];
            if(mat[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    
    cout << abs(2 - row) + abs(2 - col) << endl; 
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
