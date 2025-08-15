#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    map<ll, ll> freq, last;
    ll cur_ct = 0, ans = 0;
    for (ll i = 0; i < n; i++) {
        freq[a[i]]++;
        if (freq[a[i]] > 1) {
            freq[a[i]]--;
            cur_ct = min(i - last[a[i]] - 1, cur_ct);
        }
        last[a[i]] = i;
        cur_ct++;
        ans = max(cur_ct, ans);
    }
    cout << ans << "\n";
}
