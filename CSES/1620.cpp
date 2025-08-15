#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, t; cin >> n >> t;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if (n == 1) cout << a[0] * t << "\n";
    else {
        ll ans = LLONG_MIN;
        ll cur_t = t;
        for (ll i = 1; i < n; i++) {
            ll num1 = a[0];
            ll num2 = a[i];
            if (num1 == num2) {
                ans = max(ans, a[0] * (cur_t / 2));
                cur_t -= cur_t / 2;
            }
            else {
                ll l = 0, r = cur_t + 1;  
                ll prev = -1;
                while (l < r) {
                    ll mid = (l + r) / 2;
                    ll res1 = num1 * (cur_t - mid);
                    ll res2 = num2 * mid;
                    if (res2 >= res1) {
                        r = mid;
                    }
                    else {
                        l = mid;
                        if (l == prev) break;
                    }
                    prev = mid;
                }
                cur_t -= l;
                ans = max(ans, a[i] * l);
            }
        }
        cout << ans << "\n";
    }
}
