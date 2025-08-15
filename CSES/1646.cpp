#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, q; cin >> n >> q;
    vector<ll> psum(n + 1, 0);
    psum[0] = 0;
    for (ll i = 1; i <= n; i++) {
        ll x; cin >> x;
        psum[i] = x + psum[i - 1];
    }
    for (ll i = 0; i < q; i++) {
        ll a, b; cin >> a >> b;
        cout << psum[b] - psum[a - 1] << "\n";
    }
}
