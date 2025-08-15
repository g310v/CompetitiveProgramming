#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("div7");
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(n), p(n + 1, 0);
    unordered_map<ll, ll> rem;
    p[0] = 0;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        p[i + 1] = p[i] + a[i];
        if (!rem[p[i + 1] % 7]) rem[p[i + 1] % 7] = i + 1;
    }

    ll ans = 0;

    for (ll i = 1; i <= n; i++) {
        if (p[i] % 7 == 0) ans = max(ans, i);
        else {
            ll cur = rem[p[i] % 7];
            if (cur < i) {
                ans = max(ans, i - cur); 
            }
        }
    }

    cout << ans << "\n";
}

