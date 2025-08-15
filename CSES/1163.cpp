#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll x, n; cin >> x >> n;
    map<ll, ll> mp;
    set<ll> s;
    s.insert(0);
    s.insert(x);
    vector<ll> p(n);
    ++mp[x];
    for (ll i = 0; i < n; i++) {
        cin >> p[i];
        auto it = s.lower_bound(p[i]);
        ll r = *it;
        --it;
        ll l = *it;
        --mp[r - l];
        if (!mp[r - l]) mp.erase(r - l);
        s.insert(p[i]);
        ++mp[r - p[i]];
        ++mp[p[i] - l];
        cout << ((--mp.end())->first) << " ";
    }
}
