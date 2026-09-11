# C++ Competitive Programming Template

Official template of the **Γα=Ω5 (CPC Gallos)** club for competitive programming (ICPC, Codeforces, AtCoder, etc.), aligned with the [ICPC Team Reference Document (Notebook TRD)](https://github.com/CPC-GALLOS/Notebook).

---

## 💻 Template Code

```cpp
// _author_
// link and/or problem name
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>     
using namespace std;
using namespace __gnu_pbds;

/* TLE Pragmas & Caveats (uncomment w/ care):
#pragma GCC optimize("O3,unroll-loops")         
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt") 
*/

using ll = long long; using ull = unsigned long long; using ld = long double;
using pii = pair<int, int>; using pll = pair<ll, ll>;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define gs(n) ((n * (n + 1)) >> 1)
#define pb push_back  
#define eb emplace_back 
#define F first
#define S second
#define sz(x) (int)(x).size()
#define yn(x) (cout << ((x) ? "YES\n" : "NO\n"))
#define dbg(...) cerr<<"LINE("<<__LINE__<<")->["<<#__VA_ARGS__<<"]: ["<<(__VA_ARGS__)<<"]\n";

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
```

---

## ⚡ Key Features

- **Fast I/O**: `cin.tie(0)->sync_with_stdio(0);` and `#define endl '\n'`.
- **Modular Structure**: Test-case separation via `void solve()` and `while (tc--) solve();`.
- **PBDS (Policy-Based Data Structures)**:
  - `ordered_set`: $O(\log N)$ operations for `find_by_order(k)` ($k$-th order statistic) and `order_of_key(x)` (count of elements strictly less than $x$).
  - `gp_hash_table`: High-performance open-addressing hash table (3x-5x faster than `std::unordered_map`).
- **TLE Optimization Pragmas**:
  - Commented pragmas for `#pragma GCC optimize("O3,unroll-loops")` and SIMD support `#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")`.
- **Type Aliases**: `ll`, `ull`, `ld`, `pii`, `pll`.
- **Essential Macros**: `all(x)`, `rall(x)`, `gs(n)` (Gauss summation), `pb`, `eb`, `sz(x)`, `yn(x)` (`YES\n`/`NO\n`), `dbg(...)`.

---

## ⚙️ VS Code Configuration

> [!IMPORTANT]
> Do not forget to configure the template inside the [Competitive Programming Helper (CPH)](https://marketplace.visualstudio.com/items?itemName=DivyanshuAgrawal.competitive-programming-helper) extension for VS Code.

![](https://cpc-gallos.github.io/assets/img/posts/Entorno_Desarrollo/cph_settings.png)

> [!NOTE]
> To learn more about the rationale and detailed analysis of each component in this template, visit [our blog post](https://cpc-gallos.github.io/blog/Plantilla/).

> [!TIP]
> To troubleshoot issues with `<bits/stdc++.h>` or PBDS on macOS, check [this guide](https://cpc-gallos.github.io/blog/Entorno_Desarrollo/#instalar-el-compilador-en--macos).
