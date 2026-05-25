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
    string s;
    cin >> s;

    int a = 0, b = 0, c = 0;

    f(i, sz(s)) {
        if(s[i] == '1') a+= 1;
        else if(s[i] == '2') b+=1;
        else if(s[i] == '3') c += 1;
    }
    string ans;
    f(i, a) {
        ans.pb('1');
        ans.pb('+');
    }
    f(i, b) {
        ans.pb('2');
        ans.pb('+');    
    }
    f(i, c) {
        ans.pb('3');
        ans.pb('+');
    }

    ans.pop_back();

    cout << ans;
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
