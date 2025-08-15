#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, t;
    cin >> n >> t;

    vector<tuple<ll, ll>> a(n);

    for (ll i = 0; i < n; i++) {
        ll d, b;
        cin >> d >> b;
        a[i] = make_tuple(d, b);
    }

    sort(a.begin(), a.end());

    ll cur = 0LL, ans = 0LL;

    for (ll i = 0; i < n; i++) {
        if (cur < t) {
            if (cur < get<0>(a[i])) {
                cur = get<0>(a[i]) - 1;
            }

            if (cur + get<1>(a[i]) <= t) {
                ans += get<1>(a[i]);
                cur += get<1>(a[i]);
            }
            else {
                ans += (t - cur);
                cur = t;
            }
        }
    }

    cout << ans << "\n";
}

