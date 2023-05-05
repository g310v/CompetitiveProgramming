#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n + 1), b(n + 1);
    map<int, int> mp;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x] = i;
    }

    for (int i = 1; i <= n; i++) cin >> b[i];

    for (int i = 1; i <= n; i++) {
        int cur = a[b[i]] - i;
        if (cur < 0) {
            cur += n;
        }
        mp[cur]++;
    }

    int ans = 0;
    for (auto x : mp) {
        ans = max(ans, x.second);
    }

    cout << ans;
}
