# Plantilla de Programación Competitiva en C++

Plantilla oficial del club **Γα=Ω5 (CPC Gallos)** para su uso en programación competitiva (ICPC, Codeforces, AtCoder, etc.), alineada con el [ICPC Team Reference Document (Notebook TRD)](https://github.com/CPC-GALLOS/Notebook).

---

## 💻 Código de la Plantilla

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

## ⚡ Características Principales

- **Fast I/O**: `cin.tie(0)->sync_with_stdio(0);` y `#define endl '\n'`.
- **Estructura Modular**: Separación de casos de prueba con `void solve()` y `while (tc--) solve();`.
- **PBDS (Policy-Based Data Structures)**:
  - `ordered_set`: Operaciones en $O(\log N)$ para `find_by_order(k)` (k-ésimo elemento) y `order_of_key(x)` (conteo de elementos menores que $x$).
  - `gp_hash_table`: Hash map abierto de alto rendimiento (3x-5x más rápido que `std::unordered_map`).
- **Pragmas de Optimización TLE**:
  - Directivas comentadas para `#pragma GCC optimize("O3,unroll-loops")` y soporte SIMD `#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")`.
- **Aliases y Tipos**: `ll`, `ull`, `ld`, `pii`, `pll`.
- **Macros Esenciales**: `all(x)`, `rall(x)`, `gs(n)` (suma Gauss), `pb`, `eb`, `sz(x)`, `yn(x)` (`YES\n`/`NO\n`), `dbg(...)`.

---

## ⚙️ Configuración en VS Code

> [!IMPORTANT]
> No olvides configurar la plantilla dentro de la extensión de VS Code [Competitive Programming Helper (CPH)](https://marketplace.visualstudio.com/items?itemName=DivyanshuAgrawal.competitive-programming-helper).

![](https://cpc-gallos.github.io/blog/Entorno_Desarrollo/cph_settings.png)

> [!NOTE]
> Para conocer a detalle la justificación y análisis de cada componente de la plantilla, visita [nuestro blog](https://cpc-gallos.github.io/blog/Plantilla/).

> [!TIP]
> Para solucionar problemas con la cabecera `<bits/stdc++.h>` o PBDS en macOS, consulta [este post](https://cpc-gallos.github.io/blog/Entorno_Desarrollo/#instalar-el-compilador-en--macos).
