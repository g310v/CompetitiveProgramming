#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> a;
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        ll p = upper_bound(a.begin(), a.end(), x) - a.begin();
        if (p < a.size()) {
            a[p] = x;
        }
        else {
            a.push_back(x);
        }
    }
    cout << a.size() << "\n";
}

