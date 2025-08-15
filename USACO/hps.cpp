#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("hps");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<char> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> h(n + 1, 0), p(n + 1, 0), s(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        h[i + 1] = h[i];
        p[i + 1] = p[i];
        s[i + 1] = s[i];
        if (a[i] == 'H') h[i + 1]++;
        if (a[i] == 'P') p[i + 1]++;
        if (a[i] == 'S') s[i + 1]++;
    }
    ll ans = 0;
    for (ll i = 1; i < n; i++) {
        ll hl = h[i] - h[0], hr = h[n] - h[i];
        ll pl = p[i] - p[0], pr = p[n] - p[i];
        ll sl = s[i] - s[0], sr = s[n] - s[i];
        ll l_max = max(hl, pl);
        l_max = max(l_max, sl);
        ll r_max = max(hr, pr);
        r_max = max(r_max, sr);
        ans = max(ans, l_max + r_max);
    }
    cout << ans << "\n";
}

