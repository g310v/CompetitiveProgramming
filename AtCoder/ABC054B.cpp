#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<string> a(n);
    vector<string> b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    string ans = "No";

    for (int i = 0; i <= n - m; i++) {
        for (int j = 0; j <= n - m; j++) {
            bool match = true;
            for (int k = 0; k < m; k++) {
                bool cur_match = true;
                for (int l = 0; l < m; l++) {
                    if (a[i + k][j + l] != b[k][l]) {
                        cur_match = false;
                        break;
                    }
                }
                if (!cur_match) {
                    match = false;
                    break;
                }
            }
            if (match) {
                ans = "Yes";
                break;
            }
        }
        if (ans == "Yes") break;
    }

    cout << ans;
}
