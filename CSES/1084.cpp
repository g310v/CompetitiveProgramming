#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, x; cin >> n >> m >> x;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < m; i++) cin >> b[i]; 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll p1 = 0, p2 = 0, ans = 0;
    while (p1 < n && p2 < m) {
        if (b[p2] <= (a[p1] + x) && b[p2] >= (a[p1] - x)) {
            ans++;
            p1++;
            p2++;
        }
        else if (b[p2] < a[p1]) p2++;
        else p1++;
    }
    cout << ans << "\n";
}
