#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> v;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        v.push_back(a);
        v.push_back(b);
        mp[a]++;
        mp[b]--;
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (ll i = 0; i < v.size(); i++) {
        if (i > 0) mp[v[i]] += mp[v[i - 1]];
        ans = max(ans, mp[v[i]]);
    }
    cout << ans << "\n";
}
