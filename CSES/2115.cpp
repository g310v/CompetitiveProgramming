#include <bits/stdc++.h>
using namespace std;

const int N = 5000 + 5;
int n, m, k;
int a[N], f[N], g[N][N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++) {
            if (x == 0) g[x][y] = y;
            else if (y == 0) g[x][y] = x;
            else if (x == y) g[x][y] = x;
            else if (y < x) g[x][y] = g[y][x % y];
            else g[x][y] = g[y][x];
        }
    }

    int T;
    cin >> T;
    while (T--) {
        cin >> n;
        m = 0;
        k = 0;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            k = g[k][a[i]];
        }

        for (int i = 1; i <= n; i++) {
            a[i] /= k;
            m = max(m, a[i]);
        }
        
        const int INF = 0x3f3f3f3f;
        for (int x = 1; x <= m; x++) {
            f[x] = INF;
        }
        for (int i = 1; i <= n; i++) {
            f[a[i]] = 0;
        }

        for (int x = m; x >= 1; x--) {
            for (int i = 1; i <= n; i++) {
                int y = g[x][a[i]];
                if (f[x] + 1 < f[y]) {
                    f[y] = f[x] + 1;
                }
            }
        }

        int ans = f[1] > 0 ? f[1] - 1 : 0;

        for (int i = 1; i <= n; i++) {
            if (a[i] > 1) ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}

