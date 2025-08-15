#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];
    vector<ll> ans(n + 1), psum(n + 1, 0);
    psum[0] = 0;
    for (ll i = 1; i <= n; i++) {
        psum[i] = psum[i - 1];
        if (a[i - 1] == b[i - 1]) psum[i]++;
    }
    map<pair<ll, ll>, bool> present;
    for (ll mid = 0; mid < n; mid++) {
        ll l = mid, r = mid;
        ll cur = 0;
        while (l >= 0 && r <= n - 1) {
            if (a[l] == b[r]) {
                cur++;
            }
            if (l != r && a[r] == b[l]) {
                cur++;
            }
            ans[psum[l] + cur + (psum[n] - psum[r + 1])]++;
            l--;
            r++;
        }
        cur = 0;
        l = mid, r = mid + 1;
        while (l >= 0 && r <= n - 1) {
            if (a[l] == b[r]) {
                cur++;
            }
            if (a[r] == b[l]) {
                cur++;
            }
            ans[psum[l] + cur + (psum[n] - psum[r + 1])]++;
            l--;
            r++;
        }
    }
    for (ll i = 0; i <= n; i++) {
        cout << ans[i] << "\n";
    }
}
