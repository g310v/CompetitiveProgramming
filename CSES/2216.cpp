#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        mp[x] = i;
    }
    ll last = mp[1], ans = 1;
    for (ll i = 2; i <= n; i++) {
        if (mp[i] < last) ans++;
        last = mp[i];
    }
    cout << ans << "\n";
}
