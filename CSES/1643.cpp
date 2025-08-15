#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

ll solve(vector<ll> a) {
    ll n = a.size();

    if (n == 1) return a[0];

    vector<ll> c, d;

    for (ll i = 0; i < n; i++) {
        if (i < n / 2) c.push_back(a[i]);
        else d.push_back(a[i]);
    }

    ll max_left = solve(c), max_right = solve(d);

    ll cur_tail = 0, cur_head = 0, max_tail = 0, max_head = 0;

    for (ll i = c.size() - 1; i >= 0; i--) {
        cur_tail += c[i];
        if (i == c.size() - 1) {
            max_tail = cur_tail;
        }
        else {
            max_tail = max(max_tail, cur_tail);
        }
    }

    for (ll i = 0; i < d.size(); i++) {
        cur_head += d[i];
        if (i == 0) {
            max_head = cur_head;
        }
        else {
            max_head = max(max_head, cur_head);
        }
    }

    ll overlap_max = max_head + max_tail;

    return max(max_left, max(max_right, overlap_max));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = solve(a);

    cout << ans;
}
