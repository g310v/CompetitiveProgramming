#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    set<ll> a;
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        a.insert(x);
    }
    cout << a.size() << "\n";
}
