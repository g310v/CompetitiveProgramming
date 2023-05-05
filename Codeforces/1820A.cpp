#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (s.size() == 1 && s[0] == '^') cout << 1 << "\n";
        else {
            int ans = 0;

            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '_') {
                    if (i == 0) ans++;
                    if (s[i+1] != '^') ans++;
                }
            }

            cout << ans << "\n";
        }

    }
}
