#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q; cin >> n >> q;
    vector<string> v(n);
    for (string &s : v) cin >> s;
    vector<vector<int>> psum(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++) {
        psum[0][i] = 0;
        psum[i][0] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            psum[i][j] = psum[i-1][j] + psum[i][j-1] - psum[i-1][j-1];
            if (v[i-1][j-1] == '*') {
                psum[i][j]++;
            }
        }
    }
    while (q--) {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        int ans = psum[y1][y2] - psum[y1][x2-1] - psum[x1-1][y2] + psum[x1-1][x2-1];
        cout << ans << "\n";
    }
}
