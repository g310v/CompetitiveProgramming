#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> psum(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        ll a; cin >> a;
        psum[i + 1] = psum[i] + a;
    }
    ll ans = 0;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++) {
        if (psum[i] % n == 0) {
            ans += mp[0] + 1;
            mp[0]++;
        }
        else {
            ll fl = psum[i] / n;
            ll cl = (fl >= 0) ? fl + 1 : fl - 1;
            fl *= n;
            cl *= n;
            ans += mp[psum[i] - fl];
            ans += mp[psum[i] - cl];

            ll rem = abs(psum[i]) % n;
            if (psum[i] < 0) rem *= -1;
            mp[rem]++;
        }
    }
    cout << ans << "\n";
}
