#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // make prefix sum of unique numbers
    // get last two indices of each num
    // iterate through each num and-
    // check how many unique numbers come before the first index of that num
    ll n; cin >> n;
    vector<ll> psum(n + 1);
    psum[0] = 0;
    map<ll, bool> present;
    vector<pair<ll, ll>> a(n + 1, make_pair(-1, -1));
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        psum[i + 1] = psum[i];
        if (!present[x]) {
            psum[i + 1]++;
            present[x] = 1;
            a[x].second = i;
        }
        else {
            a[x].first = a[x].second;
            a[x].second = i;
        }
    }
    ll ans = 0;
    for (pair<ll, bool> cur : present) {
        if (a[cur.first].first >= 0 && a[cur.first].second >= 0) {
            ans += psum[a[cur.first].first + 1] - 1;
        }
    }
    cout << ans << "\n";
}
