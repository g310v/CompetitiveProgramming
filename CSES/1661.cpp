#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, x; cin >> n >> x;
    vector<ll> psum(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        ll a; cin >> a;
        psum[i + 1] = psum[i] + a;
    }
    ll ans = 0;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++) {
        if (psum[i] == x) ans++;
        if (mp[psum[i] - x] > 0) ans += mp[psum[i] - x];
        mp[psum[i]]++;
    }
    cout << ans << "\n";
}
