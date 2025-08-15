#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    ll cur = 1;
    bool found = false;
    for (auto i : a) {
        if (i > cur) {
            found = true;
            cout << cur << "\n";
            break;
        }
        cur += i;
    }
    if (!found) cout << sum + 1 << "\n";
}

