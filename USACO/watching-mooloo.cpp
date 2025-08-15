#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0LL;

    for (ll i = 0; i < n; i++) {
        if (i == 0) {
            ans += k + 1LL;
        }
        else {
            ll x = a[i] - a[i - 1];
            ll y = k + 1LL;
            ans += min(x, y);
        }
    }

    cout << ans << "\n";
}
