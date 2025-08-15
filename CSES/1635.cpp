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
    for (ll i = 1; i <= x; i++) { 
        for (ll &c : a) {
            if (i - c >= 0) {
                dp[i] = (dp[i] + dp[i-c]) % MOD;
            }
        }
    }
    cout << dp[x] << "\n";
}

