#include<bits/stdc++.h>
using namespace std;
using ll = int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, k; cin >> n >> k;
    vector<vector<ll>> v;
    ll sq = sqrt(n), ct = 0;
    vector<ll> a;
    for (ll i = 1; i <= n; i++) {
        if (ct > sq) {
            ct = 0;
            v.push_back(a);
            a.clear();
        }
        a.push_back(i);
        ct++;
    }
    if (!a.empty()) v.push_back(a);
    ll r = 0, c = 0; 
    for (ll i = 0; i < n; i++) {
        ll j = k % (n - i);
        while (j) {
            if (c + j < v[r].size()) {
                c += j;
                j = 0;
            }
            else {
                j -= v[r].size() - c;
                c = 0;
                r++;
            }
            if (r >= v.size()) {
                r = 0;
            }
        }
        while (v[r].size() <= c) {
            c = 0;
            r++;
            if (r >= v.size()) {
                r = 0;
            }
        }
        cout << v[r][c] << " ";
        if (i != n - 1) {
            v[r].erase(v[r].begin() + c);
            while (v[r].size() <= c) {
                c = 0;
                r++;
                if (r >= v.size()) {
                    r = 0;
                }
            }
        }
    }
    cout << "\n";
}
