// _author_
// link and/or problem name
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // PBDS: policy-based data structs
#include <ext/pb_ds/tree_policy.hpp>     // req for order statistics (ordered_set)
using namespace std;
using namespace __gnu_pbds; // PBDS: ordered_set & gp_hash_table

/* TLE Pragmas & Caveats (uncomment w/ care):
#pragma GCC optimize("O3,unroll-loops")          // Ofast has fast-math (breaks float signs: -0.0+0.0=-0)
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt") // SIMD + HW bit ops (bmi/lzcnt/popcnt; err on old GCC)
*/

using ll = long long; using ull = unsigned long long; using ld = long double;
using pii = pair<int, int>; using pll = pair<ll, ll>;

// --- PBDS Policy-Based Data Structures ---
// 1. ordered_set: find_by_order(k) (k-th min, 0-idx) & order_of_key(x) (cnt < x) in O(log N)
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// ordered_multiset trick (duplicates allowed): use pair<T, int> with unique id

// 2. gp_hash_table: 3x-5x faster open-addr hash map (replaces unordered_map)
// gp_hash_table<int, int> fast_map;

#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define gs(n) ((n * (n + 1)) >> 1)
#define pb push_back   // safe w/ braces {a,b}; avoids explicit ctor calls
#define eb emplace_back // in-place v.eb(a,b) w/o temp copies (faster for structs)
#define F first
#define S second
#define sz(x) (int)(x).size()
#define yn(x) (cout << ((x) ? "YES\n" : "NO\n"))
#define dbg(...) cerr<<"LINE("<<__LINE__<<")->["<<#__VA_ARGS__<<"]: ["<<(__VA_ARGS__)<<"]\n";

// Execution Timer (for local benchmarking):
// auto start_time = chrono::high_resolution_clock::now();
// auto duration = chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - start_time).count();

void solve() {
    return; // solution logic
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
    return 0;
}