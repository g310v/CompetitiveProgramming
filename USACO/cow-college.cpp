#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll charge = 0, total = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] * (n - i) > total) {
            total = a[i] * (n - i);
            charge = a[i];
        }
    }

    cout << total << " " << charge << "\n";
}
