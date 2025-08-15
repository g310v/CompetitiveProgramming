#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

const int MOD = 1000000007;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, x; cin >> n >> x;
    vector<ll> a(n), dp(x + 1, 0);
    for (ll i = 0; i < n; i++) cin >> a[i];
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= x; w++) {
            if (w - a[i - 1] >= 0) {
                dp[w] = (dp[w] + dp[w - a[i - 1]]) % MOD;
            }
        }
    }
    cout << dp[x] << "\n";
}


