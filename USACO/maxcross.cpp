#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);

    ll n, k, b; cin >> n >> k >> b;
    vector<ll> v(n + 1, 0);
    for (ll i = 0; i < b; i++) {
        ll x; cin >> x;
        v[x]++;
    }
    ll ans = LLONG_MAX;
    for (ll i = 1; i <= n; i++) {
        v[i] += v[i - 1];
    }
    for (ll i = 0; i <= n - k; i++) {
        ans = min(ans, v[i + k] - v[i]);
    }
    cout << ans << "\n";
}
