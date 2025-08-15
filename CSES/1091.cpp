#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m; cin >> n >> m;
    set<pair<ll, ll>> s;
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        s.insert(make_pair(x, i));
    }
    for (ll i = 0; i < m; i++) {
        ll x; cin >> x;
        auto it = s.lower_bound(make_pair(x + 1, 0));
        if (it == s.begin()) cout << "-1\n";
        else {
            it--;
            cout << (*it).first << "\n"; 
            s.erase(it);
        }
    }
}
