#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int cur = -1, ans = 0, n = s.length();

    for (int i = 0; i <= n; i++) {
        if (i < n) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
                ans = max(ans, i - cur);
                cur = i;
            }
        }
        else {
            ans = max(ans, n - cur);
        }
    }

    cout << ans;
}
