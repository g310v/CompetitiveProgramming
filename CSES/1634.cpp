#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, x; cin >> n >> x;
    ll INF = x + 1;
    vector<ll> a(n), dp(x + 1, INF);
    for (ll i = 0; i < n; i++) cin >> a[i];
    dp[0] = 0;
    for (ll i = 1; i <= x; i++) { 
        for (ll &c : a) {
            if (i - c >= 0) {
                dp[i] = min(dp[i], dp[i-c] + 1);
            }
        }
    }
    if (dp[x] == INF) cout << "-1\n";
    else cout << dp[x] << "\n";
}
