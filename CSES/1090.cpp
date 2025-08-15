#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ll l = 0, r = n - 1, ans = 0;
    while (l <= r) {
        ans++;
        if (l == r) {
            l++;
            r--;
        }
        else if (a[l] + a[r] <= x) {
            l++;
            r--;
        }
        else r--;
    }
    cout << ans << "\n";
}
