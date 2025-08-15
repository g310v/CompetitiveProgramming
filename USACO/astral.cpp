#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin >> t;
    while (t--) {
        ll n, a, b; cin >> n >> a >> b;
        vector<string> s(n);
        for (ll i = 0; i < n; i++) cin >> s[i];
        ll ans = 0;
        if (a == 0 && b == 0) {
            for (ll i = 0; i < n; i++) {
                for (ll j = 0; j < n; j++) {
                    if (s[i][j] == 'G' || s[i][j] == 'B') ans++;
                }
            }
        }
        else {
            for (ll i = 0; i < n; i++) {
                for (ll j = 0; j < n; j++) {
                    if (s[i][j] == 'B') {
                        ans++;
                        if (i + b < n && j + a < n && s[i + b][j + a] == 'G') {
                            s[i + b][j + a] = 'W';
                        }
                        if (i - b >= 0 && j - a >= 0 && (s[i - b][j - a] == 'G' || s[i - b][j - a] == 'B')) {
                            if (s[i - b][j - a] == 'G') {
                                s[i - b][j - a] = 'W';
                                ans++;
                            }
                        }
                        else {
                            ans = -1;
                            break;
                        }
                    }
                }
                if (ans == -1) break;
            }
            for (ll i = 0; i < n; i++) {
                if (ans == -1) break;
                for (ll j = 0; j < n; j++) {
                    if (s[i][j] == 'G') {
                        if (i + b < n && j + a < n) {
                            if (s[i + b][j + a] == 'G') {
                                s[i + b][j + a] = 'W';
                            }
                        }
                        ans++;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}
