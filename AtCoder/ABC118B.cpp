#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vector<int> cur(x + 1);
        cur[0] = x;
        for (int i = 1; i <= x; i++) {
            cin >> cur[i];
        }
        a[i] = cur;
    }

    int ans = 0;

    for (int i = 1; i <= m; i++) {
        bool everyone_likes = true;
        for (int j = 0; j < n; j++) {
            bool person_likes = false;
            for (int k = 1; k <= a[j][0]; k++) {
                if (a[j][k] == i) {
                    person_likes = true;
                    break;
                }
            }
            if (!person_likes) {
                everyone_likes = false;
                break;
            }
        }
        if (everyone_likes) ans++;
    }

    cout << ans;
}
