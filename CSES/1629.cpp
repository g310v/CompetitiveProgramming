#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end());
    ll ans = 0, last = 0;
    for (ll i = 0; i < n; i++) {
        if (v[i].second >= last) {
            ans++;
            last = v[i].first;
        }
    }
    cout << ans << "\n";
}
