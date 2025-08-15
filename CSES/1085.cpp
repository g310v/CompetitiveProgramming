#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    ll mx = 0;
    for (ll &x : a) {
        cin >> x;
        mx = max(mx, x);
    }
    ll l = mx, r = 1e9 * 2e5;
    while (l < r) {
        ll mid = (l + r) / 2LL;
        ll cur_need = 0;
        ll cur = 0;
        for (ll i = 0; i < n; i++) {
            cur += a[i];
            if (i == n - 1) {
                cur_need++;
                cur = 0;
            }
            else {
                if (cur + a[i + 1] > mid) {
                    cur_need++;
                    cur = 0;
                }
            }
        }
        if (cur_need <= k) {
            r = mid;
        }
        else {
            l = mid + 1;
        }
    }
    cout << l << "\n";
}

