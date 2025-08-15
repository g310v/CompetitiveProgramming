#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<pair<ll, ll>> a(n);
    for (pair<ll, ll> &p : a) {
        cin >> p.first >> p.second;
    }
    sort(a.begin(), a.end());
    ll f = 0, ans = 0;
    for (ll i = 0; i < n; i++) {
        f += a[i].first;
        ans += a[i].second - f;
    }
    cout << ans << "\n";
}
