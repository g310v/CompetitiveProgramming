#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);

    int mx = 0, ans;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > mx) {
            mx = a[i];
            ans = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i != ans) {
            if (mx % a[i] != 0) {
                ans = -2;
                break;
            }
        }
    }

    cout << ans + 1;
}
